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
	//Store the head somewhere
	//We will search the linked list for the proper place to put value, then insert it.
	//When found, note the pointer. This pointer becomes the inserted values next. 
	//Will return the head of the entire list
	

	//Create the variables previous, current, and toInsert
	struct node* previous;
	previous = malloc(sizeof(struct node));
	previous = list;

	struct node* current;
	current = malloc(sizeof(struct node));
	current = list;
	
	struct node* toInsert;
	toInsert = malloc(sizeof(struct node));
	toInsert->data = value;

	//While there still exists a list, follow until the first instance where the number is larger than the given value
	while (current->next != NULL) {
	//	printf("Current value: %d \n", current-> data);
		if (current->data > value) {
			//If these two are the same, we are at the very beginning of the list. Change the pointers accordingly
			if (current == previous) {
				list = toInsert;
				toInsert->next = current;
				previous = toInsert;
			} else {
				//Otherwise, we can operate as standard
				previous->next = toInsert;
				toInsert->next = current;
			}
			return list;
		}
		//Move along the linked list
		previous = current;
		current = current->next;

	}
	
	return list;
	
};

struct node* delete(struct node* list, int value)
{
	//Put your code here
	//list should have the head of the linked list
	//value is the value to be deleted: loop through the entire list looking for value
	//Once found, free the memory and change around the pointers
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
