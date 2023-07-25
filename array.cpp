#include<stdio.h>
#include<string.h>
main()
{
	char *reverse;
	char str[100];
	fgets(str,100,stdin);
	for(int i = 0 ; str[i] ;i++)
	reverse = &str[i-1];
	for(int j =0 ; str[j]; j++)
	{
		printf("%c",*(reverse-j));
	}
	
	
}
