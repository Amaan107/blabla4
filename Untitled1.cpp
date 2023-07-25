# include<stdio.h>
void store(int col, int array[][col]);
void print(int col, int array[][col]);
main ()
{
	int row, col;
	printf("Enter number of rows:");
	scanf("%d",&row);
	printf("\nEnter number of columns:");
	scanf("%d",&col);
	int  array[row][col];
	printf("\nEnetr numbers: ");
	store(col, array);
	printf("In matrix form");
	printf(col, array);
}
void store(int array[][SIZE],int col)
{
for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		scanf("%d",&array[i][j]);
		printf("\n");
	}	
}
void print(int array[][SIZE], int col)
{
	
	for(int k = 0 ;k < row ;k++) 
	{
		for(int l = 0 ;l < col ;l++)
		printf(" %d",array[k][l]);
		printf("\n");
	}
	
}
