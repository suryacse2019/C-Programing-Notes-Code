//wap to input 10 element of array and find greatest number within all
#include <stdio.h>
int main() 
  {
    int a[10],i,greatest;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++) 
	{
    scanf("%d", &a[i]);
    }
    greatest = a[0];
    for (i = 0; i < 10; i++) 
	{
        if (a[i] > greatest) 
		{
        greatest = a[i];
    	}
    }
    printf("Greatest of ten numbers is %d", greatest);
  }
