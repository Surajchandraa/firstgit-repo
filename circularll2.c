//this is cll we will only maintain with tail pointer.
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
struct node*temp,*newnode,*tail;
void create(){
    int choic;
    tail=0;
    while(choic){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data in linked list");
    newnode->next=0;
    scanf("%d",&newnode->data);
    if(tail==0){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    printf(" 1 for continioue\n");
    scanf("%d",&choic);
    }
}
void display(){
    temp=tail->next;
    while(temp->next!=tail->next){
        printf("%d",temp->data);
        temp=temp->next;
    }
 printf("%d",temp->data);
}

/*void display(){
    temp=head;
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp->next!=head);
}
*/
void singlenode(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data for this node");
    scanf("%d",&newnode->data);

}
void insertbeg(){
    singlenode();
    newnode->next=tail->next;
    tail->next=newnode;
}
void insertend(){
    singlenode();
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
}
void insertspecific(){
    int pos,i=0;
    temp=tail->next;
    printf(" enter the position\n");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    if(pos==1){
        insertbeg();
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
//deletion in linkedlist.
void deletebeg(){
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
}
void deletefromend(){
    struct node*current;
    current=tail->next;
    while(current->next!=tail->next){
        temp=current;
        current=current->next;
    }
    temp->next=tail->next;
    tail=current;
    free(temp);

}
void deletespecific(){
    struct node*current;
    current=tail->next;
    int pos,i=0;
    printf(" enter the postion");
    scanf("%d",&pos);
    while(i<pos-1){
        current=current->next;
        i++;
    }
    temp=current->next;
    current->next=temp->next;
    free(temp);

}
void main(){
        create();
        display();
}
