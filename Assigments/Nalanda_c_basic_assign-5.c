#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_ARG_LENGTH 50
#define MAX_SERVERS 10
#define SERVER_NAME_MAX_LENGTH 30

typedef struct {
    char *name;
    int port;
} ServerInfo;

int validate_arg(char *arg) {
    int i, len = strlen(arg);
    int colon_count = 0, alpha_count = 0, digit_count = 0;
    for (i = 0; i < len; i++) {
        if (arg[i] == ':') colon_count++;
        else if (isalpha(arg[i])) alpha_count++;
        else if (isdigit(arg[i])) digit_count++;
        else return 0;
    }
    if (colon_count != 1 || alpha_count == 0 || digit_count == 0) return 0;
    int port = atoi(strchr(arg, ':') + 1);
    if (port < 0 || port > 1023) return 0;
    return 1;
}

ServerInfo *extract_info(char *arg) {
    ServerInfo *info = malloc(sizeof(ServerInfo));
    char *colon_ptr = strchr(arg, ':');
    int server_name_len = colon_ptr - arg;
    info->name = malloc(server_name_len + 1);
    strncpy(info->name, arg, server_name_len);
    info->name[server_name_len] = '\0';
    info->port = atoi(colon_ptr + 1);
    return info;
}

char *concat_servers(ServerInfo **servers, int num_servers) {
    int i, len = 0;
    for (i = 0; i < num_servers; i++) {
        len += strlen(servers[i]->name);
        if (i < num_servers - 1) len++; // for the '_' separator
    }
    char *result = malloc(len + 1);
    int pos = 0;
    for (i = 0; i < num_servers; i++) {
        strcpy(result + pos, servers[i]->name);
        pos += strlen(servers[i]->name);
        if (i < num_servers - 1) {
            result[pos] = '_';
            pos++;
        }
    }
    result[len] = '\0';
    return result;
}

void free_servers(ServerInfo **servers, int num_servers) {
    int i;
    for (i = 0; i < num_servers; i++) {
        free(servers[i]->name);
        free(servers[i]);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Usage: %s server1:port1 server2:port2 ... serverN:portN\n", argv[0]);
        return 1;
    }

    int i, num_servers = argc - 1;
    ServerInfo *servers[MAX_SERVERS];

    for (i = 1; i <= num_servers; i++) {
        if (!validate_arg(argv[i])) {
            printf("Invalid argument: %s\n", argv[i]);
            free_servers(servers, i - 1);
            return 1;
        }
        servers[i - 1] = extract_info(argv[i]);
    }

    char *concatenated = concat_servers(servers, num_servers);
    printf("Concatenated server names: %s\n", concatenated);
    free(concatenated);

    free_servers(servers, num_servers);
    return 0;
}