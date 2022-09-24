#include<stdio.h>
int main()
{
	
	int m[3][3],n[3][3],p[3][3],r,c,k;
	printf("FIRST MATIX\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the element of matrix:");
			scanf("%d",&m[r][c]);
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d\t",m[r][c]);
		}
		printf("\n");
	}
	printf("SECOND MATRIX\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the element of matrix:");
			scanf("%d",&n[r][c]);
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d\t",n[r][c]);
		}
		printf("\n");
	}
	printf("PRODUCT OF GIVEN MATRICES\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{    
		    p[r][c]=0;
			for(r=0;r<3;r++)
			{
				p[r][c]+=m[r][k]*n[k][c];
			}
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d\t",p[r][c]);
		}
		printf("\n");
	}
}