#include<stdio.h>
void main() 
{
	int n,f;
	int a[50],i,key;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("enter the key");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
		{
		f=1;
		break;	
		}	
	}
	if(f==1)
		{
		printf("element %d is found at %d",key,i);
		}
	else
		{
		printf("not an element");		
		}
}

