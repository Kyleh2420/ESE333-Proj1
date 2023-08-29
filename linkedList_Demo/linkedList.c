#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

struct node
{
	struct node* next;
	int data;
};


struct node* insert(struct node* list, int value)
{
	//Put your code here
	return list;
	
};

struct node* delete(struct node* list, int value)
{
	//Put your code here
	return list;

};

int main()
{
	struct node* head;
	head = malloc(sizeof(struct node));
	head->data =0;
	head->next = malloc(sizeof(struct node));
	struct node* current = head-> next;
	for(int idx = 2; idx < 10; idx +=2)
	{
		current->data = idx; 
		current->next = malloc(sizeof(struct node));
		current = current->next;
	}
	current->data = 10;
	current = head;

	current = delete(current, 0);
	current = insert(current, -3);
	current = insert(current, 3);
	current = delete(current, 10);
	current = insert(current, 12);
	current = delete(current, 2);
	current = delete(current, 7);

	while(current != NULL)
	{
		printf("found element number %d \n", current->data);
		head = current;
		current = current->next;
		free(head);
	}
	

}
