#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void creation(){
    struct node *head, *newnode,*temp;
    head=0;
    int choice;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data :- ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
           head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue...prses 0 for NO...1 for YES :- ");
        scanf("%d",&choice);
    }    
    printf("Your list is as follows :-\n");
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insert_at_beginning(){
    struct node * head, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert :- ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head= newnode;
}
void insert_at_end(){
    struct node * head, *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert :- ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=newnode;

}
void insert_after_a_given_node(){
    struct node * head, *newnode,*temp;
    int pos,count,i=1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position :- ");
    scanf("%d",&pos);
    if(pos>count){
        printf("Invalid position");
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        printf("Enter data to insert :- ");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void delete_at_beginnning(){
    struct node *head,*temp;
    temp=head;
    head=head->next;
    free(temp);
}
void delete_at_last(){
    struct node *head,*temp,*prev;
    temp=head;
    while(temp->next!=0){
        prev=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
    }
    else{
        prev->next=0;
    }
    free(temp);
}
void delete_at_specific_position(){
    struct node *head,*temp,*nextnode;
    int pos,i=1;
    temp=head;
    printf("Enter the position :- ");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
int main(){
    creation();
    return 0;
}