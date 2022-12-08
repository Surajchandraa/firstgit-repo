//doubly circular linkedlist
/*    THIS  CODE IS FOR doubly circular LINKED LIST
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
    struct node*pre;
};
struct node*head,*tail,*temp,*newnode,*tail;
void creat(){
    int choice;
    head=0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&newnode->data);
    if(head==0){
        head=temp=tail=newnode;
        head->next=head;
        head->pre=head;
    }
    else{
       tail->next=newnode;
       newnode->next=head;
       newnode->pre=tail;
       head->pre=newnode;
       tail=newnode;


    }
    printf("enter 1 for continiou");
    scanf("%d",&choice);
}
}
void display(){
    temp=head;
    while(temp!=tail){
        printf("%d",temp->data);
        temp=temp->next;
    }
printf("%d",temp->data);
}
void singlenode(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element in this node\n");
    scanf("%d",&newnode->data);
}
//lets do insertion in doubly circular linkedlist
void insertbeg(){
    singlenode();
    if(head==0){
        head=tail=newnode;
        newnode->pre=tail;//any pointer can be taken
        newnode->next=head;
    }
    else{
    newnode->next=head;
    head->pre=newnode;
    newnode->pre=tail;
    tail->next=newnode;
    head=newnode;//dont update it first because link will be destroyed.
}
}
void insertend(){
    if(head==0){
        head=tail=newnode;
        newnode->pre=tail;//any pointer can be taken
        newnode->next=head;
    }
    else{
    singlenode();
    newnode->pre=tail;
    newnode->next=head;
    tail->next=newnode;
    head->pre=newnode;
    tail=newnode;

    
}
}
void insertspecific(){
    int pos,i=0;
    printf("enter the position at which you want to insert\n");
    scanf("%d",&pos);
    singlenode();
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->pre=temp;
    newnode->next=temp->next;
    temp->next->pre=newnode;
    temp->next=newnode;
}
//now we will do deletion
void deleteformbeg(){
    temp=head;
    tail->next=head->next;
    head->next->pre=tail;
    head=head->next;
    free(temp);
}
void deletefromend(){
    temp=tail;
    tail->pre->next=head;
    head->pre=tail->pre;
    tail=tail->pre;
    free(temp);
}
void deletespecific(){
    int pos,i;
    printf("enter the postion from you want to delete");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    temp->pre->next=temp->next;
    temp->next->pre=temp->pre;
    if(temp->next==head){
        tail=temp->pre;
        free(temp);
    }
    else{
        free(temp);
    }

}
void main(){
    creat();
    deleteformbeg();
    display();
}