#include<stdio.h>
int main()
{
	int arr[3][3],i,j,r1,r2,r3;
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
	r1=r3=r2=0;
   
	
		for(j=0;j<3;j++)
		{
			if(arr[0][j]==1)
			r1++;
			if(arr[1][j]==1)
			r2++;
			if(arr[2][j]==1)
			r3++;
	      }
	  
   printf(" \n");
   if(r1>r2&&r1>r3)
   {
   	printf("1st row have most number of 1s");
   }
   if(r2>r1&&r2>r3)
   {
   	printf("2nd row have most number of 1s");
   }
   if(r3>r2&&r1<r3)
   {
   	printf("3rd row have most number of 1s");
   }
}