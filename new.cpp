#include<stdio.h>
//#include<string.h>
void check_digits_alpha_special_space(char a[])
{
	int cap_alp=0,sml_alp=0,space=0,digits=0,special=0;
	for(int i = 0; i < a[i] ;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		cap_alp++;
		else if(a[i]>='a'&& a[i]<='z')
		sml_alp++;
		else if(a[i]==' ')
		space++;
		else if(a[i]>='0'&& a[i]<='9')
		digits++;
		else
		special++;
	}
	printf("\nUppercase letters are: %d",cap_alp);
	printf("\nLowercase letters are: %d",sml_alp);
	printf("\nSpaceses are: %d",space);
	printf("\nDigits are: %d",digits);
	printf("\nSpecial characters are: %d",special);
}
main()
{
	char a[30];
	printf("Enter your string:");
	fgets(a,30,stdin);
	printf("%s",a);
	check_digits_alpha_special_space(a);
}

