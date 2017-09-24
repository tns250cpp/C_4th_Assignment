/*4th assignment
find transpose of a matrix*/


#include <stdio.h>

int main()
{
	int row, column, i, j, a[10][10], transpose[10][10];
	printf("Enter rows and columns of matrix: ");
	scanf("%d %d", &row, &column);

	//Storing elements of the matrix
	printf("\nEnter elements of matrix:\n");
	for(i=0; i<row; ++i)
		for(j=0; j<column; ++j)
		{
			printf("Enter element a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}

	//Displaying the matrix a[][]
	printf("\nEntered Matrix: \n");


	for(i=0; i<row; ++i)
	{
		for(j=0; j<column; ++j)
		{
			printf("%d", a[i][j]);
			if(j == column - 1)
			puts("\n");
		}
	}

	
	for(i=0; i<column; ++i)
	{
		for(j=0; j<row; ++j) //finding the transpose of matrix a
		{
			transpose[i][j]=a[j][i];
		}
	}

	printf("\nTranspose of Matrix\n");

	for(i=0; i<column; ++i)  //Displaying the transpose of matrix a
	{
		for(j=0; j<row; ++j)
		{
			printf("%d", transpose[i][j]);
			if(j = row - 1)
			puts("\n");
		}

	}

	return 0;
}
			
	
