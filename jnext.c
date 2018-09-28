// To find the just next number. First implementation is without a tail pointing to the end of the list. Second implementation is using a tail pointer to the end of the list//

/*
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

void insert_sort(List*,int);
void display(List*);
int delete_front(List* list);
void insert_end(List* list, int ele);
int delete_rear(List* list);
int delete_position(List* list, int pos);
int main()
{
	int test_cases;
	scanf("%d",&test_cases);
	while(test_cases)
	{
		List* list = (List*)malloc(sizeof(List));
		List* list1 = (List*)malloc(sizeof(List));
		list -> head = NULL;
		list1 -> head = NULL;
		int n;
		//printf("Enter Number of digits:");
		scanf("%d",&n);
		int a[n];
		//printf("Enter the elements");
		int count = 0;
		for(int i = 0; i<n ; i++)
		{
			scanf("%d",&a[i]);
			insert_end(list,a[i]);
		}
		if( n != 1)
		{
			if(a[n-1]>a[n-2])
			{
				int last = delete_rear(list);
				int last_prev = delete_rear(list);
				insert_end(list,last);
				insert_end(list,last_prev);
				display(list);
			}
			else
			{
				for(int i = n-1;i > 0;i--)
				{
					if(a[i-1]< a[i])
					{
						insert_sort(list1,a[i]);
						insert_sort(list1,a[i-1]);
						delete_rear(list);
						delete_rear(list);
						Node* p = list1 -> head;
						Node* q = list1 -> head;
						int c = 0;
						while(p -> data <= a[i-1])
						{
							p = p -> link;
							c++; 
						}
						int d = delete_position(list1,c);
						insert_end(list,d);
						int e;
						while(q != NULL)
						{
							q = q -> link;
							e = delete_position(list1,0);
							insert_end(list,e);
						}
						count = 1;
						display(list);
						break;
					}
					else
					{
						delete_rear(list);
						insert_sort(list1,a[i]);
					}
				}
			}
		}
	if(count == 0)
		printf("%d",-1);
	test_cases--; 
	printf("\n");
	}
}


void insert_sort(List* list, int ele)
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

void insert_end(List* list, int ele)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp -> data = ele;
    temp -> link = NULL;
    Node* q = list -> head;
    Node* prev = NULL;
    while(q != NULL)
    {
    	prev = q;
    	q = q->link;
    }
    if(prev == NULL && q == NULL)
    {
    	list -> head = temp;
    }
    else
    {
    	prev -> link = temp;
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
            printf("%d",temp->data);
            temp = temp->link;
        }
    }
}

int delete_front(List* list)
{
    if(list -> head != NULL)
    {
        //Node* prev = NULL;
        Node* temp = (Node*)malloc(sizeof(Node));
        temp = list -> head;
         
        if(temp -> link == NULL)
        {
        	list -> head = NULL;
        }
        else
        {
        	list -> head = temp-> link;
        }
        int e = temp -> data;
        free(temp);
        return(e);
    }
    else
    	return -1;
}

int delete_rear(List* list)
{
	Node* temp = (Node*)malloc(sizeof(Node));
    temp = list -> head;
	Node* q = NULL;
	while(temp -> link != NULL)
	{
		q = temp;
		temp = temp -> link;
	}
	if(q == NULL)
	{
		list -> head = NULL;
	}
	else
	{
		q -> link = NULL;
	}
	int e = temp -> data;
	free(temp);
	return(e);
}

int delete_position(List* list, int pos)
{
	if(list -> head != NULL)
    {
        Node* prev = NULL;
        Node* temp = (Node*)malloc(sizeof(Node));
        prev = NULL;
        temp = list -> head;
        int c = 0;
        while(temp != NULL && c != pos)
        {
            prev = temp;
            temp = temp -> link;
            c++;
        }
        if(prev == NULL && (c == pos))
        {
            list -> head = temp -> link;
            //free(temp);
        }
        else if(prev != NULL && (c == pos))
        {
            prev->link = temp ->link;
            //free(temp);
        }
        int x = temp -> data;
        free(temp);
        return(x);
    }
    else
    	return -1;
}*/


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
	Node* tail;
}List;

void insert_sort(List*,int);
void display(List*);
int delete_front(List* list);
void insert_end(List* list, int ele);
int delete_rear(List* list);
int delete_position(List* list, int pos);
int main()
{
	int test_cases;
	scanf("%d",&test_cases);
	while(test_cases)
	{
		List* list = (List*)malloc(sizeof(List));
		List* list1 = (List*)malloc(sizeof(List));
		list -> head = NULL;
		list1 -> head = NULL;
		int n;
		// printf("Enter Number of digits:");
		scanf("%d",&n);
		int a[n];
		// printf("Enter the elements");
		int count = 0;
		for(int i = 0; i<n ; i++)
		{
			scanf("%d",&a[i]);
			insert_end(list,a[i]);
			//count = 1;
		}
		if( n != 1 ) // For a single digit condition.
		{
			if(a[n-1]>a[n-2]) // If last digit is greater than the last but one digit.
			{
				int last = delete_rear(list);
				int last_prev = delete_rear(list);
				insert_end(list,last);
				insert_end(list,last_prev);
				display(list);
			}
			else
			{
				for(int i = n-1; i > 0; i--)
				{
					if(a[i-1]< a[i])
					{
						insert_sort(list1,a[i]);
						insert_sort(list1,a[i-1]);
						delete_rear(list);
						delete_rear(list);
						Node* p = list1 -> head;
						Node* q = list1 -> head;
						int c = 0;
						while(p -> data <= a[i-1])
						{
							p = p -> link;
							c++; 
						}
						int d = delete_position(list1,c);  // Deletes the element from sorted list that has to be inserted into the list.
						insert_end(list,d);
						int e;
						while(q != NULL)
						{
							q = q -> link;
							e = delete_front(list1);
							insert_end(list,e);
						}
						count = 1;
						display(list);
						break;
					}
					else // Condition is satisfied till a greater number than the previous number is found. 
					{
						delete_rear(list);
						insert_sort(list1,a[i]);
					}
				}
			}
		}
	if(count == 0)
		printf("%d",-1); // If number has a single digit or no greater number available.
	test_cases--; 
	printf("\n");
	}
}


void insert_sort(List* list, int ele)
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
			list -> tail = temp;
		}
		else // Insert At End.
		{
			prev -> link = temp;
			list -> tail = temp;
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

void insert_end(List* list, int ele)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp -> data = ele;
    temp -> link = NULL;
    Node* q = list -> tail;
    if(q == NULL)
    {
    	list -> head = temp;
    	list -> tail = temp;
    }
    else
    {
    	q -> link = temp;
    	list -> tail = temp;
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
            printf("%d",temp->data);
            temp = temp->link;
        }
    }
}

int delete_front(List* list)
{
    if(list -> head != NULL)
    {
        //Node* prev = NULL;
        Node* temp = (Node*)malloc(sizeof(Node));
        temp = list -> head;
         
        if(temp -> link == NULL)
        {
        	list -> head = NULL;
        	list -> tail = NULL;
        }
        else
        {
        	list -> head = temp-> link;
        }
        int e = temp -> data;
        free(temp);
        return(e);
    }
    else
    	return -1;
}

int delete_rear(List* list)
{
	Node* temp = (Node*)malloc(sizeof(Node));
    temp = list -> head;
	Node* q = NULL;
	while(temp -> link != NULL)
	{
		q = temp;
		temp = temp -> link;
	}
	if(q == NULL)
	{
		list -> head = NULL;
		list -> tail = NULL;
	}
	else
	{
		q -> link = NULL;
		list -> tail = q;
	}
	int e = temp -> data;
	free(temp);
	return(e);
}

int delete_position(List* list, int pos)
{
	if(list -> head != NULL)
    {
        Node* prev = NULL;
        Node* temp = (Node*)malloc(sizeof(Node));
        prev = NULL;
        temp = list -> head;
        int c = 0;
        while(temp != NULL && c != pos)
        {
            prev = temp;
            temp = temp -> link;
            c++;
        }
        if(prev == NULL && (c == pos))
        {
            list -> head = temp -> link;
            //free(temp);
        }
        else if(prev != NULL && temp != NULL)
        {
            prev->link = temp ->link;
            //free(temp);
        }
        else if(prev != NULL && temp == NULL)
        {
        	prev -> link = NULL;
        	list -> tail = prev;
        }
        int x = temp -> data;
        free(temp);
        return(x);
    }
    else
    	return -1;
}

