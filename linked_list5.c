// Union Of Two Linked Lists.

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
List* union_list(List*,List*,List*);

int main()
{
	int element;
	List* list1 = (List*)malloc(sizeof(List));
	List* list2 = (List*)malloc(sizeof(List));
	List* result = (List*)malloc(sizeof(List));
	list1 -> head = NULL;
	list2 -> head = NULL;
	result -> head = NULL;
	int choice = 1;
	while(choice>0 && choice<7)
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: scanf("%d",&element);
					insert(list1,element);
					break;
			case 2: scanf("%d",&element);
					insert(list2,element);
					break;
			case 3: display(list1);
					break;
			case 4: display(list2);
					break;
			case 5: result = union_list(list1,list2,result);
					break;
			case 6: display(result);

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

List* union_list(List* list_1, List* list_2, List* result)
{
	Node* list1 = (Node*)malloc(sizeof(Node));
	Node* list2 = (Node*)malloc(sizeof(Node));
	Node* res = (Node*)malloc(sizeof(Node));

	list1 = list_1 -> head;
	list2 = list_2 -> head;
	res = result -> head;

	if(list1 == NULL && list2 != NULL) // List1 Is Empty.
	{
		result -> head = list2;
	}
	else if(list1 != NULL && list2 == NULL) // List2 Is Empty.
	{
		result -> head = list1;
	}
	else if(list1 != NULL && list2 == NULL) // Both Lists Are Empty.
	{
		printf("Empty Lists");
	}
	else
	{
		if(list1 -> data < list2 -> data)
		{
			res = list1;
			list1 = list1 -> link;
			result -> head = res;
		}
		else if(list1 -> data > list2 -> data)
		{
			res = list2;
			list2 = list2 -> link;
			result -> head = res;
		}
		else
		{
			res = list1;
			list1 = list1 -> link;
			list2 = list2 -> link;
			result -> head = res;
		}
		while((list1 != NULL) && (list2 != NULL))
		{
			if(list1 -> data < list2 -> data)
			{
				while(list1 -> data == res -> data)
					list1 = list1 -> link;
				if(list1 -> data != res -> data)
				{
					res -> link = list1;
					list1 = list1 -> link;
					res = res -> link;
				}
			}
			else if(list1 -> data > list2 -> data)
			{
				while(list2 -> data == res -> data)
					list2 = list2 -> link;
				if(list2 -> data != res -> data)
				{
					res -> link = list2;
					list2 = list2 -> link;
					res = res -> link;
				}

			}
			else
			{
				res -> link = list1;
				list1 = list1 -> link;
				list2 = list2 -> link;
				res = res -> link;
			}
		}
		if(list1 == NULL)
		{
			if(list2 -> data != res -> data)
				res -> link = list2;
			else
				list2 = list2 -> link;
				res -> link = list2;
		}
		else if(list2 == NULL)
		{
			if(list1 -> data != res -> data)
				res -> link = list1;
			else
				list1 = list1 -> link;
				res -> link = list1;
		}

	}
	return result;
}













