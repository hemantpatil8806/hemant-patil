#include<stdio.h>
int main()
{
	int matrix[10][10], transpose[10][10];
	int rows,cols,i,j;
	
	printf("Enter number of rows and colums of the matrix:");
	scanf("%d %d",&rows, &cols);
	
	printf("Enter elements of the matrix:\n");
	for(i = 0; i< rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("elements  [%d][%d]:",i,j);
			scanf("%d", &matrix[i][j]);	
		}
	}
	    printf("\n original matrix:\n");
	    	for(i = 0; i < rows; i++){
	    	for(j = 0; j < cols; j++){
	    	printf("%d\t",matrix[i][j]);
	    }
	    printf("\n");
	}
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	
	printf("\ntranspose matrix:\n");
	for(i = 0; i < cols; i++){
		for(j = 0; j < rows; j++){
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
