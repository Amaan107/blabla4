#include<stdio.h>
#include<string.h>
struct book
{
char title[10];
char author[10];
double price;	
}b1,b2;
main()
{
printf("enter book(1) title:");
fgets(b1.title,10,stdin);
printf("\nenter author name:");
fgets(b1.author,10,stdin);
printf("\nEnter price:");
scanf("%f.",&b1.price);

//second book;

printf("\n\nenter book(2) title:");
fgets(b2.title,10,stdin);
printf("\nenter author name:");
fgets(b2.author,10,stdin);
printf("\nEnter price:");
scanf("\n%f",&b2.price);
printf("%lf",b2.price);
}
