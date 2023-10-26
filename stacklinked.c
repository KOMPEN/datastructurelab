#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void main()
{
	int choice;
	printf("stack operations using linked list......................");
	printf("\n1.push\n2.pop\n3.display\n4.exit");
	do
	{
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("enter valid choice:");
				 break;
		}
	}
		while(choice!=4);

}
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	printf("enter data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
void pop()
{
	struct node *prev;
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	printf("deleted element is: %d",temp->data);
	prev->next=NULL;
	free(temp);
}
void display()
{
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		printf("element is: %d \n",temp->data);
		temp=temp->next;
	}
}
		
			
