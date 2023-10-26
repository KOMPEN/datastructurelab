#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	int a[50],i;
	printf("enter the limit");
	scanf("%d", &n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];	
	}
	printf("the sum is %d",sum);
}
