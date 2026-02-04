#include<stdio.h>
int add_matrix(int m, int n, int (*ptr1)[n],int (*ptr2)[n], int (*ptr3)[n]);
int main()
{
    int m,n;
    printf("Enter the value of m & n");
    scanf("%d%d",&m,&n);
    int arr[m][n],arr1[m][n];
    printf("Enter the values for matrices1:");
    for(int i=0;i<m;i++)
    {
	for(int j=0;j<n;j++)
	{
	    scanf("%d",&(*(*(arr+i)+j)));
	}
    }
    printf("enter the values to matrices2:");
    for(int i=0;i<m;i++)
    {
	for(int j=0;j<n;j++)
	{
	    scanf("%d",&(*(*(arr1+i)+j)));
	}
    }
    int res[m][n];
    add_matrix(m, n, arr,arr1, res);
    printf("\n");
    for(int i=0;i<m;i++)
    {
	for(int j=0;j<n;j++)
	{
	    printf("%d ",*(*(res + i) + j));
	}
	printf("ihigdkdsihdsidijghdighdkjvbeiuh\n");
    
    }
}

int add_matrix(int m, int n, int (*ptr1)[n],int (*ptr2)[n], int (*ptr3)[n])
{
    for(int i=0;i<m;i++)
    {
	for(int j=0;j<n;j++)
	{
	    *(*(ptr3+i)+j) = (*(*(ptr1+i)+j)) + (*(*(ptr2+i)+j));
	    //printf("%d",(res+i)+j);
	}
    }


}
