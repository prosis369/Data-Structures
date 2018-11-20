/*Write a program that reads in a positive integer and prints the binary representation of that integer.
Hint:  divide the integer by 2 and use stack or queue.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node *link;
} Node;
typedef struct List {
    Node* head;
    int length;
} List;

List* create_list();
void push(List*, int);
void disp(List*);
void pop(List*);

int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		List* list = create_list();
		while(n > 1)
		{
			push(list,n%2);
			n = n/2;
		}
		push(list,n);
		disp(list);
	}
	else
	{
		printf("Not a positive integer\n");
	}
	return 0;
}

List* create_list()
{
    List* ls = (List*)malloc(sizeof(List));
    ls -> length = 0;
    ls -> head = NULL;
    return ls;
}

void push(List* list, int ele)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp -> data = ele;
    temp -> link = NULL;
    if(list -> head == NULL)
    {
        list -> head = temp;
    }
    else
    {
        temp -> link = list -> head;
        list -> head = temp;
    }
}

void disp(List* list)
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

void pop(List* list)
{
	if(list -> head != NULL)
	{
		Node* curr = list -> head;
		if(curr -> link == NULL)
		{
			list -> head = NULL;
			free(curr);
		}
		else
		{
			list -> head = curr -> link;
			free(curr);
		}
	}
}