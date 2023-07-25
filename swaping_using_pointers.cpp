#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
main()
{
	int a,b;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping a = %d and b = %d:",a,b);
	swap(&a,&b);
	printf("\n\nAfter swap result is:a = %d and b = %d:",a,b);
}
