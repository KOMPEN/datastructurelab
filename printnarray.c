#include<stdio.h>
void main()
{
	int n;
	int a[15],i;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("the elements are");
	for(i=0;i<n;i++)
	{
	printf("%d \n",a[i]);
	}
}
