#include<stdio.h>
int main()
{
	
	int m[3][3],n[3][3],r,c;
	
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

    printf("TRANSPOSE OF MATRIX \n");
    for(r=0;r<3;r++)
    {
    	for(c=0;c<3;c++)
    	{
    		printf("%d\t",m[c][r]);
		}
		printf("\n");
	}

	
}