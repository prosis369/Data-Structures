// Insert An Elemnt In A Sorted Linked List.


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* link;
}Node;

typedef struct list
{
	int length;
	Node* head;
}List;

void insert(List*,int);
void display(List*);

int main()
{
	int element;
	List* list = (List*)malloc(sizeof(List));
	list -> head = NULL;
	int choice = 1;
	while(choice>0 && choice<3)
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: scanf("%d",&element);
					insert(list,element);
					break;
			case 2: display(list);
		}

	}
}

void insert(List* list, int ele)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	Node* curr = (Node*)malloc(sizeof(Node));
	Node* prev = (Node*)malloc(sizeof(Node));
	curr = list -> head;
	prev = NULL;
	temp -> data = ele;
	temp -> link = NULL;
	
	while((curr != NULL)&&(curr -> data < ele))
	{
		prev = curr;
		curr = curr -> link;
	}
	if(curr == NULL)
	{
		if(prev == NULL) // List Is empty.
		{
			list -> head = temp;
		}
		else // Insert At End.
		{
			prev -> link = temp;
		}
	}
	else
	{
		if(prev == NULL) // Insert At Beginning.
		{
			temp -> link = curr;
			list -> head = temp;
		}
		else // Insert At Middle.
		{
			prev -> link = temp;
			temp -> link = curr;
		}
	}
}

void display(List* list)
{
    if(list -> head != NULL)
    {
        Node* temp = (Node*)malloc(sizeof(Node));
        temp = list -> head;
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
    }
}