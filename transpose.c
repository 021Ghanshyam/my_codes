#include<stdio.h>
int main()
{
	int i,j,row,col,matrix[5][5],trans[5][5];
	printf("Enter the number of row:\n ");
	scanf("%d",&row);
	printf("Enter the number of column:\n ");
	scanf("%d",&col);
	printf("enter the elements in matrix :\n");
	for( i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
		for( i = 0; i < row; i++)
        		{
                		for(j = 0; j < col; j++)
				{
                        	trans[j][i] = matrix[i][j];
				printf("transpose of the matrix:\n");
                		}
			}
		
			for( i = 0; i < col; i++)
                	{
                		for(j = 0; j < row; j++)
                		{
                                 printf("%d\t",trans[i][j]);
				 printf("\n");
				}
			}
			return 0;
	}
	
