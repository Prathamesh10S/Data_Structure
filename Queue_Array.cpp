//Program of Queue using Array
#include<stdio.h>
int front=-1,rear=-1;
int queue[100];
void Push();
void Pop();
void Peek();
void Display();

int size;
int main() {
	int ch;
	printf("Enter size of Queue :");
	scanf("%d",&size);
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
				printf("Invalid choice!\n");
		}
	} while(ch!=5);
	return 0;
}

void Push(){
	if(rear>=size-1)
	{
		printf("Queue is Full\n");
	}
	else if(front==-1&&rear==-1){
		front=0;
		rear=0;
		 int x;
		    printf("Enter element for Push :");
		    scanf("%d",&x);
		    queue[rear]=x;
		}
	else{ 
		    rear++;
	    
	        int x;
		    printf("Enter element for Push :");
		    scanf("%d",&x);
		    queue[rear]=x;
    }
}

void Pop(){
	if((front==-1&&rear==-1)||(front>rear)){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		printf("Deleted element is %d\n",queue[front]);
		front=-1;
		rear=-1;
	}
	else{
		printf("Deleted element is %d\n",queue[front]);
		front++;
	}
}

void Peek(){
	if(front==-1&&rear==-1){
		printf("Queue is empty\n");
	}
	else{
	printf("Element at top is %d\n",queue[front]);
	}
}

void Display(){
	    int i;
		if(front==-1&&rear==-1){
		printf("Queue is empty\n");
     	}
     	else{
	    printf("Elements present in Queue are :\n");
	    for(i=front;i<=rear;i++){
		printf("%d",queue[i]);
		printf("\n");
	}
  }
}
 
