/*    THIS  CODE IS FOR doubly LINKED LIST
      .
      .
      .
      .
      .
*/ 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//in this we will watch doubly linkedlist.
struct node{
    int data;
    struct node * next;
    struct node *pre;
};
struct node*head,*newnode,*temp,*tail;
void create(){
    int choice;
    head=0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data in linked list\n");
    newnode->pre=0;
    newnode->next=0;
    scanf("%d",&newnode->data);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
       tail->next=newnode;
       newnode->pre=tail;
       tail=newnode;

    }
  // printf("press 1 if you want to continiue\n");
   // scanf("%d",&choice);
}
}
void display(){
    temp=head;
    while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;

}
}
void singlenode(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element in this node");
    scanf("%d",&newnode->data);
}
void insertbeg(){
    singlenode();
    newnode->next=0;
    newnode->next=head;
    head=newnode;
    newnode->pre=0;
}
void insertend(){
    singlenode();
    newnode->next=0;
    newnode->pre=0;
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
}
void insertspecific(){
    int pos,i;
    printf("enter the position you want to insert\n");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    singlenode();
    newnode->next=temp->next;
    newnode->pre=temp;
    temp->next->pre=newnode;
    temp->next=newnode;
}
//now we will learn deletion.
void deletebeg(){
    temp=head;
    head=temp->next;
    temp->next->pre=0;
    free(temp);
}
void deleteend(){
    temp=tail;
    tail=tail->pre;
    tail->next=NULL;
    free(temp);
}
void deletespecif(){
    int pos,i;
    printf("enter the position from you want to delete\n");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    temp->next->pre=temp->pre;
    temp->pre->next=temp->next;
    free(temp);
}
void main(){
    create();
    deletespecif();
    display();
}