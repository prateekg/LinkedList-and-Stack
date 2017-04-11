#include <stdio.h>


int top = -1;
int A[5];

int isEmpty(){
	if(top==-1)
		return 1;
	else 
		return 0;
}


void push(int x){
	if(top==4)
		printf("Stack is full.\n");
	else{
		top=top+1;
		A[top]=x;
	}
}

void pop(){
	if(top==-1)
		printf("No element in stack to pop. \n");
	else 
		top=top-1;
}

void print(){
	int i; 
	printf("Final Stack is: \n");
	for(i=0;i<5; i++)
		printf("%d\t",A[i]);
	printf("\n");
}

int main(){
	pop();
	push(10);
	push(15);
	push(9);
	push(21);
	push(1);
	push(5);
	pop();
	print();
}