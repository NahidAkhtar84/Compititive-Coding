#include<stdio.h>

 typedef struct node{
    int info;
    struct node *link;
    }Node;
    Node *temp,*ptr=NULL, *start=NULL,*loc=NULL,*locp=NULL,*save=NULL;
    findB(int item){
         if(start==NULL){
            loc=NULL;
            locp=NULL;
            return;
         }
         if(start->info==item){
            loc=start;
            locp=NULL;
            return;
         }
         save=start;
         ptr=start->link;
         while(ptr!=NULL){
            if(item==ptr->info){
                locp=save;
                loc=ptr;
                return;
            }
            save=ptr;
            ptr=ptr->link;
         }
    loc=NULL;
    return;
    }

int main()
{
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
    printf("Enter the item you want to delete :\n");
    scanf("%d", &item);
    findB(item);
    if(loc==NULL){
        printf("The item is not in the list\n");
        return;
    }

    if(locp==NULL){
        start=start->link;
    }
    else{
        locp->link=loc->link;
    }
    ptr=start;
     while(ptr != NULL){
		printf("%d => ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("NULL\n");

}
