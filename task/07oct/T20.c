4/*
           *
          * *
         * * *
       * * * * *
      * * * * * *
    * * * * * * * *
  * * * * * * * * * *

*/
#include<stdio.h>
void main()
{
	int i,j,sp;
	for(i=1;i<=7;i++)
	{
		for(sp=1;sp<=7-i;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
