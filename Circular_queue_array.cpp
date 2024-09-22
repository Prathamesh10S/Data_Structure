//Program for circular queue using array
#include<stdio.h>
int queue[100];
int front=-1;
int rear=-1;
int size;
void enqueue();
void dequeue();
void peek();
void display();
int main(){
	
	int ch;
	printf("Enter size of queue :");
	scanf("%d",&size);
	printf("Operations of circular queue are :\n1)Enqueue\n2)Dequeue\n3)Peek\n4)Display\n5)Exit\n");
	while(ch!=5){
	
		printf("Enter your choice :");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 :
				enqueue();
				break;
			case 2 :
				dequeue();
				break;
			case 3 :
			    peek();
				break;	
			case 4 :
			    display();
				break;
			case 5 :
				printf("Exit point");
				break;
			default :
			    printf("Invalid choice !\n");			
		}
	}
	return 0;
}

void enqueue(){
	int x;
	
	if(front==-1&&rear==-1){
		printf("Enter element for enqueue :");
	    scanf("%d",&x);
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%size==front){
		printf("Queue is Overflow\n");
	}
	else{
		printf("Enter element for enqueue :");
    	scanf("%d",&x);
		rear=(rear+1)%size;
		queue[rear]=x;
	}
	
}

void dequeue(){
	if(front==-1&&rear==-1){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		printf("deleted element is %d\n",queue[front]);
		front=-1;
		rear=-1;
	}
	else{
		printf("Deleted element is %d\n",queue[front]);
		front=(front+1)%size;
	}
	
}

void peek(){
		if(front==-1&&rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("Top element is %d\n",queue[front]);
	}
}

void display(){
	
	int i=front;
		if(front==-1&&rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("Elements in queue are :\n");
		while(i!=rear){
			printf("%d\n",queue[i]);
			i=(i+1)%size;
		}
		printf("%d\n",queue[rear]);
	}
}
