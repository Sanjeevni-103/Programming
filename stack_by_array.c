#include<stdio.h>

int stack[5];
int top = -1;
void push(){
    int x;
    printf("Enter the number to insert :- ");
    scanf("%d",&x);
    if(top == 4){
        printf("Stack overflow!!! \n");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if (top == -1){
        printf("Underflow!!! \n");
    }    
    else{
        item=stack[top];
        top--;
    }
}
void peek(){
    if(top == -1){
        printf("Stack is empty!!! \n");
    }
    else{
        printf("%d",stack[top]);
    }
    printf("\n");
}
void display(){
    int i;
    if (top == -1){
        printf("Stack is empty \n");
    }
    else{
        for (i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }    
    printf("\n");
}
int main(){
    int choice;
    do
    {
        printf("1:Push \n2:Pop \n3:Peek \n4:Display\n");
        printf("Enter your choice :- ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid choice!!! \n");           
        }
    } while (choice!=0);
    return 0;
    
}