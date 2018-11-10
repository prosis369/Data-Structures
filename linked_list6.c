/* Linked list: Insert at beginning, Delete element, Display elements, Insert at given position, Reverse a list,Add Node after and Replace a node.
*/

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
void insert_beginning(List*, int);
void delete_element(List*, int);
void disp_list(List*);
void insert_position(List*, int, int);
void reverse(List*);
void addAfter(List*, int, int);
void replace(List*, int, int);
//void delete_list(List*);
int main() {
    int choice = 1;
    int element;
    int position;
    int b;
    int data;
    List* list = create_list();
    while(choice > 0 && choice < 8) {
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                scanf("%d", &element);
                insert_beginning(list, element);
                break;
            case 2:
                scanf("%d", &element);
                delete_element(list, element);
                break;
            case 3:
                disp_list(list);
                break;
            case 4:
                scanf("%d", &element);
                scanf("%d", &position);
                insert_position(list, position, element);
                break;
            case 5:
                reverse(list);
            case 6:
                scanf("%d",&b);
                scanf("%d",&data);
                addAfter(list, b, data);
            case 7:
                scanf("%d",&b);
                scanf("%d",&data);
                replace(list, b, data);
        }
    }
    //delete_list(list);
    return 0;
}

List* create_list()
{
    List* ls = (List*)malloc(sizeof(List));
    ls -> length = 0;
    ls -> head = NULL;
    return ls;
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

void disp_list(List* list)
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

void delete_element(List* list, int ele)
{
    if(list -> head != NULL)
    {
        //printf("%d ",1000);
        Node* prev = (Node*)malloc(sizeof(Node));
        Node* temp = (Node*)malloc(sizeof(Node));
        prev = NULL;
        temp = list -> head;
        // printf("%d ",2000);
        while(temp != NULL && temp -> data != ele)
        {
            prev = temp;
            temp = temp -> link;
        }
        if(temp == NULL)
            printf("Not found");
        else if(prev == NULL && (temp -> data ==ele))
        {
            list -> head = temp -> link;
            free(temp);
        }
        else if(prev != NULL && (temp -> data == ele))
        {
            prev->link = temp ->link;
            free(temp);
        }
    }
    else
        printf("list is empty");
}

void insert_position(List* list, int pos, int ele)
{
    Node* curr = (Node*)malloc(sizeof(Node));
    Node* prev = (Node*)malloc(sizeof(Node));
    Node* temp = (Node*)malloc(sizeof(Node));
    curr = list -> head;
    prev = NULL;
    temp -> data = ele;
    temp -> link = NULL;
    int count = 1;
    while((curr != NULL)&&(count != pos))
    {
        prev = curr;
        curr = curr -> link;
        count++;
    }
    if(curr != NULL)
    {
        if(count == 1)
        {
            temp -> link = list -> head;
            list -> head = temp;
        }
        else
        {
            temp -> link = curr;
            prev -> link = temp; 
        }
    }
    else
    {
        if((curr == NULL)&&(prev == NULL))
        {
            list -> head = temp;
        }
        else if((curr == NULL)&&(count == pos))
        {
            prev -> link = temp;
        }
        else
        {
            printf("Invalid positon");
        }
    }

}

void reverse(List* list)
{
    Node* curr = (Node*)malloc(sizeof(Node));
    Node* temp = (Node*)malloc(sizeof(Node));
    Node* prev = (Node*)malloc(sizeof(Node));
    curr = list -> head;
    temp = NULL;
    prev = NULL;
    while(curr != NULL)
    {
        temp = curr -> link;
        curr -> link = prev;
        prev = curr;
        curr = temp;
    }
    list -> head = prev;
}

void addAfter(List* list, int b, int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp -> data = data;
    temp -> link = NULL;
    Node* curr = list -> head;
    Node* prev = NULL;
    while(curr != NULL && curr -> data != b)
    {
        prev = curr;
        curr = curr -> link;
    }
    if(curr != NULL)
    {
        if(prev == NULL)
        {
            temp -> link = curr -> link;
            curr -> link = temp;
        }
        else
        {
            temp -> link = curr -> link;
            curr -> link = temp;
            
        }
    }
    else
    {
        if(prev == NULL)
        {
            printf("List is Empty");
        }
        else
        {
            printf("Node not found");
        }
    }

}

void replace(List* list, int b, int data)
{
    Node* curr = list -> head;
    while(curr != NULL && curr -> data != b)
    {
        curr = curr -> link;
    }
    if(curr != NULL)
    {
        curr -> data = data;
    }
    else
    {
        printf("Node not found");
    }
}


















