//Program of singly linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}; 
node*newnode;
node*head=0;
node*temp=head;
node*temp2;

 
void insert_at_beg();
void insert_at_end();
void insert_at_pos();

void del_at_beg();
void del_at_end();
void del_at_pos();
 
void display();
 
 int main(){
 	int ch;
 	printf("Operations of Singly linked list are :\n\n 1.insert at begining\n 2.insert at end\n 3.insert at position\n 4.Delete at begining\n 5.Delete at end\n 6.Delete at position\n 7.Display\n 8.Exit\n");
 	
 	  do {

		printf("\nEnter your choice :");
        scanf("%d",&ch);

		switch(ch) {

			case 1 :
				insert_at_beg();
				break;
			case 2 :
				insert_at_end();
				break;
			case 3 :
				insert_at_pos();
				break;	
			case 4 :
			    del_at_beg();
				break;
			case 5 :
			    del_at_end();
				break;
			case 6 :
			    del_at_pos();
				break;
			case 7 :
			     display();
				 break;	
			case 8 :
			    printf("-----------Exit point-----------");	 
			    break;
			default :
				printf("Invalid choice!\n");
		}
	} while(ch!=8); 
	return 0;
}
 
void insert_at_beg(){
	int x;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter Data for insert :");
	scanf("%d",&x);
	
	if(head==0){
		newnode->data=x;
		newnode->next=0;
		head=newnode;
		temp=head;
		temp2=head;
	}
	else{
			newnode->data=x;
	     	newnode->next=head;
	     	head=newnode;
	     	temp=head;
	     	
	}
}

void insert_at_end(){
	
	int x;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter Data for insert :");
	scanf("%d",&x);
	if(head==0){
	
		newnode->data=x;
		newnode->next=0;
		head=newnode;
		temp=head;
		temp2=head;
	}
	else{
		newnode->data=x;
		newnode->next=0;
		temp2->next=newnode;
		temp2=newnode;
	}
}

void insert_at_pos(){
		if(head==0){
		printf("List is empty\n");
	}
	else{
		int x,i=1,p,count=0;
	    newnode = (struct node*)malloc(sizeof(struct node));
	    node*tmp=temp;
	    
	    while(tmp->next!=0){
		count++;
		tmp=tmp->next; 
	}
	count++;
	printf("%d elements are present in list\n",count);
	printf("Enter position for insert :");
	scanf("%d",&p);
	if(p>count||p<1){
		printf("Invalid position!\n");
	}
	else if(p==1){
		     insert_at_beg();
			}

	else{
	    
		node*tmp1=temp;
		node*tmp2=temp;
		while(i<p){
			tmp2=tmp1;
			tmp1=tmp1->next;
			i++;
	}
	printf("Enter data for insert :");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=tmp1;
	tmp2->next=newnode;
  }
 }
}

void del_at_beg(){
	
	if(head==0){
		printf("List is empty\n");
	}
	else{
		node*del=head;
		printf("Deleted element is %d\n",head->data);
		head = head->next;
		temp=head;
		free(del);
	}
}

void del_at_end(){
	 if(head==0){
		printf("List is empty\n");
	     }
	    else if(head->next==0) {
	    	printf("Deleted element is %d\n",head->data);
	     	node*del1=head;
	     	free(del1);
	     	head=0;
		 }
	     else{
	     	node*tmp=head;
	     	node*tmp1=head;
	     	
	     	while(tmp->next!=0){
	     		tmp1=tmp;
	     		tmp=tmp->next;
			 }
			 printf("Deleted element is %d\n",tmp->data);
			 tmp1->next=0;
			 free(tmp);
	     	
        }
  }
  
  void del_at_pos(){
   if(head==0){
		printf("List is empty\n");
	}
	else{
		int j=1,p1,count1=0;
	    
	    node*t10=temp;
	    
	    while(t10->next!=0){
		count1++;
		t10=t10->next; 
	}
	count1++;
	printf("%d elements are present in list\n",count1);
	printf("Enter position for deletion :");
	scanf("%d",&p1);
	if(p1>count1||p1<1){
		printf("Invalid position!\n");
	}
	else if(p1==1){
		  
	
		node*del=head;
		printf("Deleted element is %d\n",head->data);
		head = head->next;
		temp=head;
		free(del);
    	
			}
	else{
	    
		node*t3=temp;
		node*t4=temp;
		while(j<p1){
			t4=t3;
			t3=t3->next;
			j++;
	}
	
	printf("Deleted element is %d\n",t3->data);
	t4->next=t3->next;
	free(t3);
	
  }
 }
  }

void display(){
		
	if(head==0)
	     {
			printf("List is empty\n");
		}
	else{
	    node*k=temp;
        while(k!=0){
		printf("%d",k->data);
		printf("\n");
		k=k->next;
	}
	
  }
}
