//Program of stack using Array
#include<stdio.h>
int stack[100],ch,size;
int top=-1;
void Push(void);
void Pop(void);
void Peek(void);
void Display(void);
int main() {
	printf("Enter size of stack :");
	scanf("%d",&size);
	printf("Operations of Stack are :\n1)Push\n2)Pop\n3)Peek\n4)Display\n5)Exit");

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
void Push() {

	if(top>=size-1) {
		printf("Stack is Full");
	} else {
		int x;
		printf("Enter element for Push :");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

void Pop() {
	if(top<=-1) {
		printf("Stack is Empty");
	} else {
		printf("Deleted element is %d",stack[top]);
		top--;
	}
}

void Peek() {
	if(top<=-1) {
		printf("Stack is Empty");
	} else {
		printf("Element at top is %d",stack[top]);
	}
}

void Display() {
	if(top<=-1) {
		printf("Stack is Empty");
	} else {
		int i;
		printf("Elements in Stack are :\n");
		for(i=top; i>=0; i--) {
			printf("%d",stack[i]);
			printf("\n");
		}
	}
}




