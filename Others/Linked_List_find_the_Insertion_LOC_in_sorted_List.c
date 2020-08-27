#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
};
typedef struct node NODE;
NODE *temp,*start,*ptr=NULL,*loc=NULL,*save=NULL;

int finda(int item){
if(start==NULL){
    loc=NULL;
    printf("The position is NULL\n");
    return;
}
if(item<start->info){
    loc=NULL;
    printf("The location is still NUll\n");
    return;
}
save=start;
ptr=start->link;
while(ptr!=NULL){
    if(item<ptr->info){
        loc=save;
        printf("Item is to be added after %d\n",loc->info);
    }
    save=ptr;
    ptr=ptr->link;
}
return;
}

//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

int main(){

int choice=1;
start=NULL;
while(choice)
{
    temp=(NODE *)malloc(sizeof(NODE));
    printf("Give a  Data?\n");
    scanf("%d", &temp->info);
    if(start!=NULL){
        ptr->link=temp;
        ptr=temp;
    }
    else{
        start=ptr=temp;
    }
    fflush(stdin);
    printf("Want to continue(Press 0 to terminate or any key to continue)?\n");
    scanf("%d",&choice);
}
ptr->link=NULL;
ptr=start;
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;Traverse linked list
printf("status of the Linked List is :\n");
while(ptr!=NULL){
    printf("%d >>", ptr->info);
    ptr=ptr->link;
}
printf(" NULL\n");
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
int item;
printf("Want to insert a new item :\n");
scanf("%d",&item);
finda(item);
return;
}
