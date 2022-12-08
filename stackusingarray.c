#include<stdio.h>
#include<conio.h>
#define joshi 10
int top=-1;
int stack[joshi];
void push(){
    int x;
    if(top==joshi-1){
        printf("overflow condition");

    }
    else{
        top++;
        printf(" enter the element you want to add in stack\n");
        scanf("%d",&x);
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty you cant pop anything");
    }
    else{
        printf("poped item is%d\n\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf(" stack is empty");

    }
    else{
        printf("topmost element is%d",stack[top]);
        printf("at %d index",top);
    }
}
void display(){
    int i;
    if(top==-1){
        printf(" stack is empty");

    }
    else{
        for(i=top;i>=0;i--){
            printf("%d",stack[i]);
        }

}
}

