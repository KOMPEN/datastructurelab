#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void search(void);
void main()
{
	top=-1;
	printf("\n Enter the size of STACK[MAX=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t..............................");
	printf("\n\t 1.PUSH \n\t 2.POP\n\t 3.DISPLAY\n\t 4.SEARCH\n\t 5.EXIT");

	do
	{
		printf("\n Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				
               				push();
		               		break;
				
			case 2:
				
					pop();
					break;
				
			case 3:
				
					display();
					break;
			case 4:	
					search();
					break;
				
				
			case 5:
				
					printf("\n\t EXIT POINT");
					break;
				 
			default:
				
					printf("\n\t Please enter a valid choice (1/2/3/4/5)");
				
		}
	}
	while(choice!=5);
	
	
}
	void push() 
		{
		if(top>=n-1)
		{
			printf("\n\t STACK is overflow");
		}
		else
		{
			printf("Enter a value to be pushed:");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
	void pop()
	{
		if(top<=-1)
		{
			printf("\n\t Stack is undeflow");
		}
		else
		{
			printf("\n\t The popped element is %d",stack[top]);   
			top--;
		}
	}
	void display ()
	{
		if(top>=0)
		{
			printf("\n The elements in STACK \n");
			for(i=top;i>=0;i--)
			{
				printf("\t%d",stack[i]);
		
			}
		}
		else
		{
			printf("\n The stack is empty");
		}
}


	void search()
	{
		int flag=0,key,i,pos;
		if(top==-1)
		{
			printf("stack is empty");	
		}
		else
		{

		printf("enter the value to be searched:");
		scanf("%d",&key);
		for(i=top;i>=0;i--)
		{
			if(key==stack[i])
			{
				flag=1;			
				pos=i;
			}				
		}
		}
		if(flag==1)
		{
			printf("%d found at position %d",key,pos);
		}
		else
		{
			printf("value not found");
		}
	}





				
