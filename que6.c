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
	count=1;
	for(i=0;i<3;i++)
	{   sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
			
		}
		printf("Sum of %d row is %d\n",count,sum);
		count++;
	}
	count=1;
	for(i=0;i<3;i++)
	{   sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+arr[j][i];
			
		}
		printf("Sum of %d column is %d\n",count,sum);
		count++;
	}

	
}