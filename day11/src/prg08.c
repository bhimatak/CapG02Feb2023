#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,k,l;
	int is,ie, flag=0;
	char str[20] = "abcMADAM";
	int lenStr = strlen(str);

	/*if(lenStr%2 != 0){
		printf("\nodd\n");
		for(i=0,j=lenStr-1;i<lenStr/2;i++,j--)
		{
			//printf("\ni = %c\tj = %c",str[i],str[j]);
			if(str[i]==str[j])
			{
				if(flag == 0){
					is = i;
					ie = j;
				}
				flag = 1;
			}
			else
			{
				flag = 0;
				is = 0;
				ie = 0;
			}
		}

	}
	else
	{*/
 	//   abcdMADAMxyz
		printf("\nEVen\n");
		for(i=0;i<lenStr;i++)
		{
			for(j=lenStr-1;j>i;j--)
			{
				// printf("\ni = %c\tj = %c",str[i],str[j]);
				if(str[i]==str[j])
				{
					if (flag == 0)
					{
						is = i;
						ie = j;
					}
					flag = 1;
					// printf("\nis=%d\tie=%d\n",is,ie);
					for(k=is+1,l=ie-1;(k<ie)&&(l>k);k++,l--)
					{
						// printf("\nk = %c\tl = %c",str[k],str[l]);
						if(str[k]!=str[l])
						{
							flag = 0;
							break;
						}
					}
					if(flag == 1)
						break;
				}
				else
				{
					flag = 0;
					is = 0;
					ie = 0;
				}
			}
			if(flag == 1)
				break;
		}
	//}

	printf("\nis = %d \tie=%d\n\n",is,ie);
	for(i=is;i<=ie;i++)
		printf("%c",str[i]);
	printf("\n\n");

	return 0;

}