/*
65 1 65 2 65 3 65 4 65 5
66 1 66 2 66 3 66 4 66 5
67 1 67 2 67 3 67 4 67 5
68 1 68 2 68 3 68 4 68 5
69 1 69 2 69 3 69 4 69 5
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d %d ",i,j);
		}
		printf("\n");
	}
}
