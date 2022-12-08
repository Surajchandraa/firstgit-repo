/*    THIS  CODE IS FOR SINGLY LINKED LIST
      .
      .
      .
      .
      .
*/ 
#include<stdio.h>
#include<conio.h>
#include"infixtopostfix.c"
#include<stdlib.h>
//this is for singly linkedlist
struct node{
    int data;
    struct node*next;
};
struct node* start,*newnode,*temp;
void create(){
    int choice;
    start=0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf(" enter data in node\n");
    scanf("%d",&newnode->data);

    newnode->next=0;
    if(start==NULL){
        start=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
  printf(" press 1 if you want to continuie\n");  
   scanf("%d",&choice);
    }
}
void display(){
    temp=start;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void singlenode(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf(" enter the data of this node\n");
    scanf("%d",&newnode->data);

   
    
}
void insertbeg(){
    singlenode();
    temp=newnode;
    temp->next=start;
    start=temp;

}
void insertlast(){
    singlenode();
    temp=start;
    while(temp->next!=0){
        temp=temp->next;

    }
    temp->next=newnode;
    newnode->next=0;
}
void specific_pos(){
    struct node*specific;
    int pos,i=2;
    printf("enter the position you want to insert\n");
    scanf("%d",&pos);
    singlenode();
    specific=newnode;
    temp=start;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    specific->next=temp->next;
    temp->next=specific;

}
void delbeg(){
    temp=start;
    start=temp->next;
    temp->next=0;
    free(temp);
}
void delend(){
    struct node*previous;
    temp=start;
    while(temp->next!=0){
        previous=temp;

    
    temp=temp->next;
    }
    if(temp==start){
        start=0;
    }
    else{
    previous->next=0;
    }
    free(temp);
}
void delspecific(){
    struct node*deleting;
    temp=start;
    int pos,i=1;
    printf(" from which posision you want to delete\n");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    deleting=temp->next;
    temp->next=deleting->next;
    free(deleting);
    

    
}
void reverse(){
    
}
void main(){
    create();
   // display();
   // insertbeg();
   // display()
   //insertlast();
   //display();
   //specific_pos();
   //display();
   //delbeg();
   //display();
  // delend();
  // display();
  delspecific();
  display();
}