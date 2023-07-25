#include<stdio.h>
#include<string.h>
main()
{
	char str[40];
	puts("Enter your string:");
	gets(str);
	int size = 0;
	int k = 0;
	while(str[k]!='\0')
	{
		size++;
		k++;
	}
	for(int i = 0,j = size-i ;i < size ;i++,j--)
	{
		int temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("\nreverse is :%s",str);
}
