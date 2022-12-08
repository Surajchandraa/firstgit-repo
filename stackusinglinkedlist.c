//implementation of stack using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*pre;

}*top,*newnode;
void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element ");
    scanf("%d",&newnode->data);
    newnode->pre=top;
    top=newnode;
}
void pop(){
    struct node*temp;
    temp=top;
    if(top==0){
        printf(" linked list is empty");

    }
    else{printf(" the popped element is%d\n\n",top->data);
    top=top->pre;
    free(temp);
}
}
void display(){
    struct node*temp;
    temp=top;
    if(top==0){
        printf(" stack is empty cant display");

    }
    else{
    while(temp!=0){
        printf(" %d",temp->data);
        temp=temp->pre;
    }
}
}
void peek(){
    printf("%d",top->data);
}
void main(){
    int i=0,pos;
    while(i<5){
        push();
        i++;
    }
    display();
    pop();
    display();
}