#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},*p;
	p=&a[0];
	printf("address of %d is %d",p);
	printf("\naddress is %d address is %d ",*a[p+1],a[p+1]);
	
}
