#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*link;
};
node*top=0;
void Push();
void Pop();
void Peek();
void Display();

int main() {
	int ch;
	printf("Operations of Stack are :\n\n1)Push\n2)Pop\n3)Peek\n4)Display\n5)Exit");

		while(ch!=5) {
		
		printf("\n\nEnter your choice :");
		scanf("%d",&ch);

		switch(ch) {

			case 1 :
				Push();
				break;
			case 2 :
				Pop();
				break;
			case 3 :
				Peek();
				break;
			case 4 :
				Display();
				break;
			case 5 :
				printf("Exit point");
				break;
			default :
				printf("Invalid choice!");
		}
	} 
	return 0;
}

void Push(){
	struct node*newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
		int x;
		printf("Enter element for Push :");
		scanf("%d",&x);
	if(top==0){
	
		newnode->data=x;
		newnode->link=0;
		top=newnode;
	}
	else{
		newnode->data=x;
		newnode->link=top;
		top=newnode;
	}
}

void Pop(){
	if (top==0){
		printf("Stack is Empty");
	}
	else{
		printf("Deleted element is %d",top->data);
		top=top->link;
	}
}

void Peek(){
	if(top==0){
	    printf("Stack is Empty");	
	}
	else{
		printf("Element at top is %d",top->data);
	}
}

void Display(){
		if(top==0){
	    printf("Stack is Empty");	
	}
	else{
		struct node*org=top;
		printf("Elements in stack are :\n");
		while(org!=0){
			printf("%d",org->data);
			printf("\n");
			org=org->link;
		}
	}
}

