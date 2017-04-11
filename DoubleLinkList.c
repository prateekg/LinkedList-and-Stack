#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* head;

void Insert(int x){
	struct node* p = (struct node*)malloc(sizeof(struct node));
	p->data = x;
	p->prev = NULL;
	p->next = NULL;
	struct node* current = head;
	if(head==NULL)
		head=p;
	else{
		while(current->next!=NULL) current = current->next;
		current->next = p;
		p->prev = current;
	}
}

void print(struct node* p){
	while(p->next!=NULL)
	{	printf("%d\t", p->data);
		p = p->next;
	}
	printf("%d",p->data);
}

void reverseprint(struct node* p){
	while(p->next!=NULL)
		p=p->next;
	while(p->prev!=NULL)
	{	printf("%d\t", p->data);
		p = p->prev;
	}
	printf("%d",p->data);
	
}

int main(){
	head = NULL;
	Insert(2);
	Insert(5);
	Insert(1);
	Insert(100);
	print(head);
	printf("\n");	
	reverseprint(head);
	printf("\n");	

}