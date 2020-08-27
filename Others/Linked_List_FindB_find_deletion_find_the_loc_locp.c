//Will be deleted loc value/info
#include<stdio.h>
int main()
{
    struct node{
    int info;
    struct node *link;
    };
    typedef struct node Node;
    Node *temp,*ptr=NULL, *start=NULL,*save,*loc=NULL,*locp=NULL;
    int choice=1,i,item=0;
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

    printf("Enter the item you want to delete\n");
    scanf("%d",&item);

    if(start==NULL){
        loc=NULL;
        locp=NULL;
        printf("Link list is not exist\n");
        return;
    }
    if(item< start->info){
        loc=start;
        locp=NULL;
        printf("The item is smaller\n");
        return;
    }
    save=start;
    ptr=start->link;
    while(ptr!=NULL){
        if(item==ptr->info){
            locp=save;
            loc=ptr;
            printf("Loc is  :%d\n",loc->info);
            printf("Locp is  :%d\n",locp->info);
            return;
        }
        save=ptr;
        ptr=ptr->link;
    }


}
