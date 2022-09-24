#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum;
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
	sum=0;
	sum=arr[0][2]+arr[1][1]+arr[2][0];

	printf("%d is the sum of right diagonal.",sum);
}