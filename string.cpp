#include<stdio.h>
main()
{
	int sentence=0,low_case_l=0,digits=0,up_case=0,special=0;
	char str[100];
	fgets(str, 100, stdin);
for(int i = 0 ;i < str[i]  ;i++)
{
	if(str[i] >= 'a' && str[i] <= 'z')
	low_case_l++;
	else if(str[i] >='0' && str[i] <='9')
	digits++;
	else if(str[i] >= 'A' && str[i] <='Z')
	up_case++;
	else if(str[i]=='.')
	sentence++;
	else
	special++;
}
printf("\nLower case letters:%d",low_case_l);
printf("\nUpper case letters:%d",up_case);
printf("\nDigits are:%d",digits);
printf("\nSpecial are:%d",special);
printf("\nSentence:%d",sentence);
}
