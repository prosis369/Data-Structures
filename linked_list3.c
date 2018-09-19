// Merge Two Sorted Linked Lists.

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
List* merge(List*,List*,List*);
void display(List*);
void insert_beginning(List*, int);

int main()
{
    List* first = create_list();
    List* second = create_list();
    List* final = create_list();
    int choice = 1;
    int element;
    while(choice>0 && choice<7)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: scanf("%d",&element);
                    insert_beginning(first,element);
                    //display(first);
                    break;
            case 2: scanf("%d",&element);
                    insert_beginning(second,element);
                    //display(second);
                    break;
            case 3: final = merge(first,second,final);
                    //display(final);
                    break;
            case 4: display(first);
                    break;
            case 5: display(second);
                    break;
            case 6: display(final);
                    break;
        }
    }
}

List* create_list()
{
    List* temp = (List*)malloc(sizeof(List));
    temp -> head = NULL;
    return temp;
}
void insert_beginning(List* list, int ele)
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
List* merge(List* first1,List* second1,List* final1)
{   
    Node* final = (Node*)malloc(sizeof(Node));
    Node* first = (Node*)malloc(sizeof(Node));
    Node* second = (Node*)malloc(sizeof(Node));

    final = final1 -> head;
    first = first1 -> head;
    second = second1 -> head;

    if((first == NULL) && (second != NULL)) // First List Is Empty.
    {
        final1 -> head = second;
    }
    else if((first != NULL) && (second == NULL)) // Second List Is Empty.
    {
        final1 -> head = first;
    }
    else if((first == NULL) && (second == NULL)) // Both Lists Are Empty.
    {
        printf("Empty Lists");
    }
    else if((first != NULL) && (second != NULL)) // Both Lists Are Not Empty.
    {
        if((first -> data) <= (second -> data))
        {
            final = first;
            first = first -> link;
            final1 -> head = final;
        }
        else
        {
            final = second;
            second = second -> link;
            final1 -> head = final;
        }
        while((first != NULL) && (second != NULL))
        {
            if((first -> data) <= (second -> data))
            {
                final -> link = first;
                first = first -> link;
                final = final->link;
            }
            else if((first -> data) > (second -> data))
            {
                final -> link = second;
                second = second -> link;
                final = final->link;
            }
        }
        if(first == NULL)
        {
            final -> link = second;
        }
        else if(second == NULL)
        {
            final -> link = first;
        }

    }

    return final1;
}
