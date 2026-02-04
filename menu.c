#include <stdio.h>
#include <stdlib.h>
int i, j;
int main()
{
	int row, col;
	printf("Enter the row and col :\n");
	printf("Enter the row and col :\n");
	scanf("%d %d", &row, &col);
	int arr1[row][col];
	int(*ptr1)[col] = arr1;
	printf("Enter the array1 elements of  matrix1 :\n");
	//	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf(" %d", &(*(*(arr1 + i) + j)));
			// scanf(" %d",&arr1[i][j]);
		}
	}
	int arr2[row][col];
	int(*ptr2)[col] = arr2;
	printf("Enter the array2 elements of  matrix2 :\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf(" %d", &(*(*(arr2 + i) + j)));
			// scanf(" %d",&arr2[i][j]);
		}
	}
	printf("Before operation the array1 elements of  matrix1 :\n");

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			// printf("%d ",(*(*(ptr1 + i ) + j)));
			printf("%d ", (*(*(arr1 + i) + j)));
			// printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Before operation array2 elements of  matrix2 :\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			// printf("%d ",(*(*(ptr2 + i ) + j)));
			printf("%d ", (*(*(arr2 + i) + j)));
			// printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n(a)add two matrix using pointers\n(b)multiplay two matrix using pointers\n(c)subtract two matrix using pointers\n\n");
	char ch;
	printf("Choose operation:\n");
	int a[row][col];
	scanf(" %c", &ch);
	printf("After the operation ");
	switch (ch)
	{
	case 'a':
		printf("Addition of two matrix are :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				*(*(a + i) + j) = (*(*(arr1 + i) + j)) + (*(*(arr2 + i) + j));
			}
		}

		/*print the values*/
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				//	printf("%d ",(*(*((a + i ) + j))));
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		break;
	case 'b':
		printf("Multiplication of two matrix are :\n");
		a[row][col];
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				int add = 0;
				for (int k = 0; k < row; k++)
				{
					// add = add + ((*(*(arr1 + i) + j)) * (*(*(arr2 + j) + i)));
					// add = add + (arr1[i][k] * arr2[k][j]);
					add = add + ((*(*(arr1 + i) + k)) * (*(*(arr2 + k) + i)));
				}
				*(*(a + i) + j) = add;
			}
		}

		/*print the values*/
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				//	printf("%d ",(*(*((a + i ) + j))));
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}

		break;
	case 'c':
		printf("subtraction of two matrix are :\n ");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				*(*(a + i) + j) = ((*(*(arr1 + i) + j)) - (*(*(arr2 + i) + j)));
			}
		}

		/*print the values*/
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				//	printf("%d",(*(*((a + i ) + j))));
				printf("%d", a[i][j]);
			}
			printf("\n");
		}
		break;
	default:
		printf("invalied :\n ");
		break;
	}
}
