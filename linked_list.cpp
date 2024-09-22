#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
node*head=0;
node*temp=head,*newnode;
void create();
void display();

int main(){
         int choice;
        
         printf("Operations of linked list are :\n1)Create nodes\n2)Display nodes\n3)Exit\n");
        
       do{
		  printf("\nEnter your choice :");
          scanf("%d",&choice);
         switch(choice){
         	case 1 :
         		     create();
         		     break;
            case 2 :
					 display();
					break;
			case 3 :
					printf("Exit point");
					break;
			default :
					printf("Invalid choice!\n");						     
		 }
	}  while(choice!=3);
         
         
		
return 0;
}

void create(){
	int i,x,p;
	    
		 printf("Enter how many nodes you want to create :");
	     scanf("%d",&p);
	
	for(i=1;i<=p;i++){
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data for node %d :",i);
		scanf("%d",&x);
		newnode->data=x;
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
			
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
	}
	
}

void display(){
	node*temp1=head;
	
	if(head==0){
		printf("list is empty\n");
	}
	else{
		printf("Data present in nodes are :\n");
		while(temp1->next!=0){
			printf("%d\n",temp1->data);
			temp1=temp1->next;
		}
		printf("%d\n",temp1->data);
	}
}











