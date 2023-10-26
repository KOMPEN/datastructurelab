#include<stdio.h>
void main() 
{
	int a[5],i;
	printf("enter the element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements are :");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
