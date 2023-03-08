#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ARGS 10

char* extract_server_name(char* word);
void free_memory(char** server_names, int num_servers, char* concatenated_name);

int main(int argc, char* argv[])
{
	if (argc < 4)
	{
        	printf("Not enough arguments provided. Expected at least 3.\n");
        	return 1;
	}

	int num_servers = argc - 1;
	char* server_names[num_servers];
	int port_numbers[num_servers];
	char* concatenated_name;
	int concat_len = 0;

	for (int i = 1; i <= num_servers; i++)
	{
        	char* arg = argv[i];
        	char* token = strtok(arg, ":");
        	if(!token || !isalpha(*token))
		{
			printf("Invalid server name in argument %d: %s\n", i, arg);
			free_memory(server_names, i - 1, concatenated_name);
			return 1;
        	}
        	char* server_name = extract_server_name(token);
        	if(!server_name)
		{
			printf("Error extracting server name from argument %d: %s\n", i, arg);
			free_memory(server_names, i - 1, concatenated_name);
			return 1;
        	}
        	server_names[i-1] = server_name;
        	token = strtok(NULL, ":");
        	if(!token || !isdigit(*token))
		{
			printf("Invalid port number in argument %d: %s\n", i, arg);
			free_memory(server_names, i, concatenated_name);
			return 1;
        	}
        	int port_number = atoi(token);
        	if (port_number < 0 || port_number > 1023)
		{
			printf("Port number out of range (0-1023) in argument %d: %s\n", i, arg);
			free_memory(server_names, i, concatenated_name);
			return 1;
		}
		port_numbers[i-1] = port_number;

        	concat_len += strlen(server_name);
        	if(i < num_servers)
		{
			concat_len++;
        	}
	}

	concatenated_name = (char*)malloc(concat_len + 1);
	if (!concatenated_name)
	{
        	printf("Error allocating memory for concatenated server names.\n");
        	free_memory(server_names, num_servers, concatenated_name);
        	return 1;
	}

	char* concat_ptr = concatenated_name;
	for (int i = 0; i < num_servers; i++)
	{
        	strcpy(concat_ptr, server_names[i]);
        	concat_ptr += strlen(server_names[i]);
        	if(i<num_servers-1)
		{
			*concat_ptr++ = '_';
        	}
	}
	*concat_ptr = '\0';

	printf("Server names:\n");
	for(int i=0;i<num_servers;i++)
	{
        	printf("%s:%d\n", server_names[i], port_numbers[i]);
	}
	printf("Concatenated server names: %s\n", concatenated_name);

	free_memory(server_names, num_servers, concatenated_name);

	return 0;
}

char* extract_server_name(char* word)
{
	char* server_name = (char*)malloc(strlen(word) + 1);
	if (!server_name)
	{
        	printf("Error allocating memory for server name.\n");
        	return NULL;
	}
	strcpy(server_name, word);
	return server_name;
}

void free_memory(char** server_names, int num_servers, char* concatenated_name)
{
	for(int i=0;i<num_servers;i++)
	{
		free(server_names[i]);
	}
	free(concatenated_name);
}
