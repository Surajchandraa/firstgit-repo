//this is for circular linkedlist
/*    THIS  CODE IS FOR circular LINKED LIST
      .
      .
      .
      .
      .
*/ 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
   
};
struct node*head,*temp,*newnode,*tail;
void create(){
    int choic;
    head=0;
    while(choic){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data in linked list");
    newnode->next=0;
    scanf("%d",&newnode->data);
    if(head==0){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    tail->next=head;
    printf(" 1 for continioue\n");
    scanf("%d",&choic);
    }
    printf("%d",tail->next->data);
}
void display(){
    temp=head;
    while(temp->next!=head){
        printf("%d",temp->data);
        temp=temp->next;
    }
//   printf("%d",temp->data);
}

/*void display(){
    temp=head;
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp->next!=head);
}
*/

void main(){
        create();
        display();
}