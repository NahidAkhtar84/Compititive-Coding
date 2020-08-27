#include<stdio.h>
int main()
{
    struct node{
    int info;
    struct node *link;
    };
    typedef struct node Node;
    Node *temp,*ptr=NULL, *start=NULL,*avail=NULL,*NewNode,*NewLoc;
    int choice=1,i,item=0,loc=0;
    while(choice){
        temp=(Node *)malloc(sizeof(Node));
        printf("Do you want to add an item ?\n");
        scanf("%d", &temp->info);
        if(start!=NULL){
            ptr->link=temp;
            ptr=temp;
        }
        else{
            start=ptr=temp;
        }
        fflush(stdin);
        printf("Do you want to insert another value?(0/any)\n");
        scanf("%d", &choice);
    }
    ptr->link=NULL;
    ptr=start;
    printf("Status of the linked list is :\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL\n");

    printf("Insert a new node:\n");
    ptr=start;
    avail=(Node *)malloc(sizeof(Node));
    printf("Enter the item you want to add :\n");
    scanf("%d", &item);
    printf("Enter the location :\n");
    scanf("%d", &loc);
    NewNode=avail;
    NewNode->info=item;

    for(i=1;i<=loc;i++){
        if(i==loc){
            NewLoc=ptr;
        }
        else{
            ptr=ptr->link;
        }
    }
    if(loc==0){
        NewNode->link=start;
        start=NewNode;
    }
    else{
        NewNode->link=NewLoc->link;
        ptr->link=NewLoc->link=NewNode;
    }

    printf("Status of the updated linked list is :\n");
    ptr=start;
    while(ptr!=NULL){
        printf("%d\n", ptr->info);
        ptr=ptr->link;
    }
    return 0;
}
