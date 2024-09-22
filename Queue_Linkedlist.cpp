//Program of Queue using Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
node*front=0;
node*rear=0;
void Push();
void Pop();
void Peek();
void Display();

int main() {
	int ch;
	printf("Operations of Queue are :\n1)Push\n2)Pop\n3)Peek\n4)Display\n5)Exit");

	do {

		printf("\nEnter your choice :");
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
	} while(ch!=5);
	return 0;
}

void Push(){
	
	 node*newnode;
	 newnode= (struct node*)malloc(sizeof(struct node));
	 int x;
	 printf("Enter element for Push :");
	 scanf("%d",&x);
	 newnode->data = x;
	 newnode->next = 0;
	 
	 if(front==0&&rear==0){
	 	
	   	  front =rear=newnode;
	 }
	 else{
	 	
	 	  rear->next=newnode;
	 	  rear=newnode;
	     }	
}

void Pop(){
	if(front==0&&rear==0){
		printf("Queue is Empty");
	}
	else if(front==rear){
		printf("Deleted element is %d",front->data);
		front=rear=0;
	}
	else{
		printf("Deleted element is %d",front->data);
		front = front->next;
	}
		
}

void Peek(){
	if(front==0&&rear==0){
		printf("Queue is Empty");
	}
	else{
		printf("Element at top is %d",front->data);
	}
}

void Display(){
	if(front==0&&rear==0){
		printf("Queue is Empty");
	}
	else{
		printf("Elements present in Queue are :\n");
	    node*org=front;
		while(org->next!=0){
			printf("%d",org->data);
			printf("\n");
			org=org->next;
		}
		printf("%d",org->data);
	}
}
