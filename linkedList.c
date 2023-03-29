/**
 *this program:
	1. counts the number of nodes in a liknedlist
	2. adds new node at the end of the list
	3.adds another new node at the beginning of the list
 */
#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *link;
};

/*count function*/
struct node* countNodes(struct node* head)
{
	int count = 0;
	
	if (head == NULL)
	{
		printf("The linkedlist is empty\n");
	}


	while (head != NULL)
	{
		head = head -> link;
		count++;
	}
	printf("Total nodes: %d\n", count);
	return (0);
}


/*add new node at the end*/
struct node* add_at_end(struct node* head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> link = NULL;

	head -> link -> link -> link -> link = temp;

	//head = temp;
	printf("Added at the end: ");
	while (head != NULL)
	{
		printf("%d ", head -> data);
		head = head -> link;
	}
	printf("\n");
	return (head);
}

/* add new node at the start of the list*/
struct node* at_begin(struct node* head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> link = NULL;

	temp -> link = head;
	head = temp;

	printf("Added at the beginning: ");
	while (head != NULL)
	{
		printf("%d ", head -> data);
		head = head -> link;
	}
	printf("\n");
	return (head);
}
int main(void)
{
	/*create the linkedlist nodes*/
	struct node *head = malloc(sizeof(struct node));

	head -> data = 1;
	head -> link = malloc(sizeof(struct node));
	head -> link -> data = 23;
	head -> link -> link = malloc(sizeof(struct node)); 
	head -> link -> link -> data = 45;
	head -> link -> link -> link = malloc(sizeof(struct node));
	head -> link -> link -> link -> data = 243;
	head -> link -> link -> link -> link  = NULL;
	

	int data = 967;
	//function call
	countNodes(head);
	add_at_end(head, data);
	at_begin(head, data);

	return (0);
}
