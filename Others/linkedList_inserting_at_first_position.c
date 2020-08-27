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

    NODE *temp, *start, *ptr = NULL,*avail;
    int choice = 1, count = 0, ITEM = 0;
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

	printf("Enter the ITEM you want to insert in the first position of the Linked List:\n");
	scanf("%d", &ITEM);
ptr=start;
avail=(NODE *)malloc(sizeof(NODE));
ptr=avail;
ptr->info=ITEM;
ptr->link=start;  //ptr updated with avail then ptr-link points to the start to set new node at first
printf("The updated list\n");
while(ptr!=NULL){
    printf("%d\n", ptr->info);
    ptr=ptr->link;
}

return 0;
}


