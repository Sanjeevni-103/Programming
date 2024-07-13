#include<stdio.h>
void traversal (){
    int a[50],size,i;
    printf("Enter size of the array :- ");
    scanf("%d",&size);
    if(size>50){
        printf("Enter size within bound limit");
    }
    else{
        printf("Enter elements of the array :-");
        for (i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("Elements in array are :- ");
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
    }    
}
void insertion(){
    int a[50],size,i,pos,num;
    printf("Enter size of the array :- ");
    scanf("%d",&size);
    if(size>50){
        printf("Enter size within bound limit");
    }
    else{
        printf("Enter elements of the array :-");
        for (i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("Enter data you want to insert :- ");
        scanf("%d",&num);
        printf("Enetr the position where the data is to be inserted :- ");
        scanf("%d",&pos);
        if(pos<=0 || pos>size+1){
            printf("Invalid position !!! ");
        }
        else{
            for(i=size-1;i>=pos-1;i--){
                a[i+1]=a[i];
            }
            a[pos-1]=num;
            size++;
            printf("Elements in array are :- ");
            for(i=0;i<size;i++){
                printf("%d ",a[i]);
            }
        }
    }  
}
void deletion(){
    int a[50],size,i,pos;
    printf("Enter size of the array :- ");
    scanf("%d",&size);
    if(size>50){
        printf("Enter size within bound limit");
    }
    else{
        printf("Enter elements of the array :-");
        for (i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("Enter the position where element is to be deleted :- ");
        scanf("%d",&pos);
        if(pos<=0 || pos>size ){
            printf("Invalid position!!!");
        }
        else{
            for(i=pos-1;i<size-1;i++){
                a[i]=a[i+1];
            }
            size--;
            printf("Elemnts of the array are :- ");
            for (i=0;i<size;i++){
                printf("%d ",a[i]);
            }
        }
    }    
}
int main(){
    //traversal();
    //insertion();
    //deletion();
    return 0;
}