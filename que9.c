#include<stdio.h>
int main()
{
	int arr[3][3],i,j,zero,nzero;
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
	zero=nzero=0;
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==0)
			zero++;
			else
			nzero++;
	      }
	  }
   if(zero>nzero)
   printf("This matrix is a sparse matrix");
   else
   printf("This matrix is not a sparse matrix");
   
}