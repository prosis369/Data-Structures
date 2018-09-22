//Code for creating and displaying a binary tree.



#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* link1;
	struct Node* link2;

}Node;
void display1(Node* root);
void display2(Node* root);
void display3(Node* root);

Node* create_node(int ele);

int main()
{
	Node* root = create_node(2);
	root ->link1 = create_node(1);
	root ->link2 = create_node(3);
	root ->link2 -> link1 = create_node(4);
	root ->link2 -> link2 = create_node(5);

	display1(root);
	printf("\n");
	display2(root);
	printf("\n");
	display3(root);
	printf("\n");

}

Node* create_node(int ele)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp -> data = ele;
	temp -> link1 = NULL;	
	temp -> link2 = NULL;
	return temp;
}

void display1(Node* root)  // display1 = inorder 
{
	if((root -> link1 == NULL)&&(root -> link2 == NULL))
	{
		printf("%d ",root -> data);
	}
	else
	{
		display1(root -> link1);
		printf("%d ",root -> data);
		display1(root -> link2);
			}
}

void display2(Node* root)  // display2 = postorder
{
	if((root -> link1 == NULL)&&(root -> link2 == NULL))
	{
		printf("%d ",root -> data);
	}
	else
	{
		display2(root -> link1);
		display2(root -> link2);
		printf("%d ",root -> data);
	}
}

void display3(Node* root)  // display3 = preorder
{
	if((root -> link1 == NULL)&&(root -> link2 == NULL))
	{
		printf("%d ",root -> data);
	}
	else
	{
		printf("%d ",root -> data);
		display3(root -> link1);
		display3(root -> link2);
		
	}
}






