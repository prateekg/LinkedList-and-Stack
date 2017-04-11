#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head;

void Insert_At_beginning(int x){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp; 
}

void Insert(int x){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *current = head;

    temp->data = x; 
    temp->next = NULL;

    if(head==NULL){
      head = temp;
      current=temp;
    }
    else{
      while(current->next!=NULL) current = current->next;
      current->next = temp;
      
    }
}

void print(struct node *head){
    printf("List is:");
    while(head!=NULL){
      printf("%d\t",head->data);
      head=head->next;
      }
    printf("\n");
} 

void Reverse(struct node* p){
    if(p->next==NULL){
      head=p;
      return;
    }
    Reverse(p->next);
    struct node* q = p->next;
    q->next=p;
    p->next=NULL;
}

void DoubleLinkList(struct node* p){
      if(p->next==NULL)
        p->next = head;

      head=p->next;
}

int main()
{
  
  head = NULL;
  int i, n, x;
  // printf("How many number you want in link list:\n");
  // scanf("%d", &n);
  //  // printf("Enter the number: ");
      // for(i=0;i<n;i++){
      //   printf("Input%d : ", i);
      //   scanf("%d\n", &x);
      //   Insert(x);
      // }
  Insert(2);
  Insert(10);
  Insert(19);
  Insert(-12);
  Reverse(head);
  print(head);
  }