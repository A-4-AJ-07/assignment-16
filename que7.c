#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum,count;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element of array:");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
	
		}
		printf("\n");
	}
   printf("The lower triangle of matrix is:\n");

   printf("%d\n",arr[1][0]);
   printf("%d",arr[2][0]);
   printf(" %d ",arr[2][1]);
   
}