#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node * next;
};

void display(struct Node *ptr)
{   
	while(ptr!=NULL)
	{
		printf("element is : %d\n",ptr->data);
        ptr = ptr->next;
	}
}

struct Node * insert_at_first(struct Node *head, int data)
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr -> next = head;
	ptr -> data = data;
	return ptr;
} 

struct Node * insert_at_index(struct Node *head, int data ,int index)
{
	struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
	struct Node * p = head;
	int i = 0;
    while(i!=index-1)
	{
		p= p->next;
		i++;
	}

	ptr -> data = data;
    ptr -> next = p -> next; 
	p -> next = ptr;
	return head;
}

struct Node * insert_at_end(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr -> data = data;
  struct Node * p = head;

  while(p ->next!=NULL)
  {
	  p = p->next;
  }
  
  p -> data = data;
  p -> next= ptr;
  ptr ->next = NULL;
  return head;

}


int main()
{
 struct Node * head;	
 struct Node * second;	
 struct Node * third;

head = (struct Node *) malloc(sizeof(struct Node)); 
second = (struct Node *) malloc(sizeof(struct Node)); 
third = (struct Node *) malloc(sizeof(struct Node)); 

head ->data = 4;
head->next=second;

second ->data = 6;
second->next=third;
 
third ->data = 8;
third->next=NULL; 

display(head);
printf("\nAfter insertion the list is \n");
head = insert_at_first(head,3);
display(head);

printf("\nAfter insertion at index the list is \n");
head = insert_at_index(head,5,2);
display(head);

printf("\nAfter insertion at end the list is \n");
head = insert_at_end(head,10);
display(head);

return 0;
  
}