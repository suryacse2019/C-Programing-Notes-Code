#include<stdio.h>
void main()
{
	int a[3]={5,4,7};
	int b[3];
	b[3]=a[3];
	printf("%d%d%d",a[0],a[1],a[2]);
	printf("%d%d%d",b[0],b[1],b[2]);
}
