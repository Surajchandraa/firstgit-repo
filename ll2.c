#include<stdio.h>
#include<stdlib.h>
void create(){//creation of linklist.
    int suraj=1;
    int joshi;
     struct node{//here we are creating a node which contains data and address part:
        int data;
        struct node*next;
    };

    struct node*head,*newnode,*temp;
    while(suraj){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter some data in this node we have created recently\n");
    scanf("%d",&newnode->data);
    scanf("%d",&joshi);
    if(head==NULL){
       head=temp=newnode;
       
    }
    else{
      head->next=newnode;
    
     
}

temp=head;
    if(joshi==1){
    suraj=1;
    }
    else{
        suraj=0;
    }
    }
    
while(temp!=0){
    printf("%d\n",temp->data);
    temp=temp->next;
    temp->next=temp;
}
}

void main(){
    
    create();


} 
