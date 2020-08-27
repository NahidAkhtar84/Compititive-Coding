/*
 * C program to create a linked list and display the elements in the list
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int info;
        struct node *link;
    };
    typedef struct node NODE;

    NODE *temp, *start, *ptr = NULL,*LOC = NULL, *SAVE = NULL;
    int choice = 1,ITEM = 0;
    start = NULL;
    while (choice)
    {
        temp  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &temp-> info);
        if (start != NULL)
        {
            ptr->link = temp;
            ptr = temp;
        }
        else
        {
            start = ptr = temp;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);

    }
    ptr->link = NULL;

    /*  reset ptr to the beginning */
    ptr = start;
    printf("\n status of the linked list is\n");
    while (ptr != NULL)
    {
        printf("%d=>", ptr->info);
        ptr = ptr -> link;
    }
	printf("NULL\n");
   printf("\n Enter the item that you want to insert into the sorted list \n");
   scanf("%d", &ITEM);
   if(start==NULL){
    printf("the linked list is not created yet\n");
    LOC=NULL;
    return;
   }
   if(ITEM<start->info){
    printf("The item is smaller then the first element\n");
    LOC=NULL;
    return;
   }

   SAVE=start;
   ptr=start->link;
   while(ptr!=NULL){
    if(ITEM<ptr->info){
        LOC=SAVE;
        printf("The element will be added after : %d", LOC->info);
        return;
    }
    SAVE=ptr;
    ptr=ptr->link;
   }
return 0;
}

