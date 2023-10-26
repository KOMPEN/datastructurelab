#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node*head;
void insertfirst()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
	printf("inserted element is: %d",newnode->data);
}
void insertlast()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		temp=newnode;
	}
	printf("inserted element is: %d",newnode->data);
}
void deletefirst()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("no element");
	}
	else
	{
		temp=head;
		head=head->next;
		printf("deleted  element is %d",temp->data);
		free(temp);
	}
}
void deletelast()
{
	struct node *temp,*previousnode;
	if(head==NULL)
	{
		printf("no element");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			previousnode=temp;
			temp=temp->next;
		}
			previousnode->next=NULL;
			printf("deleted element is %d",temp->data);
			free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("there are no elements to display");
	}
	else
	{
		while(temp!=NULL)
		{
			   printf("\n the element is %d",temp->data);
			   temp=temp->next;
		}
	}
}
void insertpos()
{
	int pos=0;
	int i=1;
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	printf("enter the pos:");
	scanf("%d",&pos);
	temp=head;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
       printf("inserted element is %d",newnode->data);
}
void deletepos()
{
	struct node *nextnode,*temp;
	int pos=0;
	int i=2;
	printf("enter the position");
	scanf("%d",&pos);
	temp=head;
	if(pos==1)
	 {
		deletefirst();
	}
	else
	{
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	printf("deleted element is %d",nextnode->data);
	free(nextnode);
	}
}
void search()
{
	int key=0;
	int pos=0;
	struct node *temp;
	printf("enter the value to be searched:");
	scanf("%d",&key);
	temp=head;
	while(temp->next!=NULL)
	{


	if(temp->data==key)
	{
		printf("%d found at %d",key,pos+1);
	}
	temp=temp->next;
	pos++;
	}
	if(temp->next==NULL)
	{
		if(key==temp->data)
		{
			printf("%d found at %d",key,pos+1);
		}
	}

}

void main()
{

	int choice=0;
     do
	{
	printf("\nenter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: insertfirst();
		break;
	case 2: insertlast();
		break;
	case 3: insertpos();
		break;
	case 4: deletefirst();
		break;
	case 5: deletelast();
		break;
	case 6: deletepos();
		break;
	case 7: display();
		break;
	case 8: search();
		break;
	case 9: exit(0);
		break;
	default: printf("enter valid choice:");
			break;
	}
     }
	while(choice!=9);
}
