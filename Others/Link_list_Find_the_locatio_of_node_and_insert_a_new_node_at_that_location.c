/*
  must be sorted,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
 */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node
    {
        int info;
        struct node *link;
    } NODE;

	NODE *temp, *start= NULL, *ptr = NULL,*LOC =NULL, *AVAIL = NULL, *NEW_NODE = NULL;
int findA(int ITEM){
	NODE *SAVE = NULL;

	if(start == NULL){
		LOC = NULL;
	return;
	}
	if(ITEM < start -> info){
		LOC = NULL;
		return;
	}
	SAVE = start;
	ptr = start -> link;
	while(ptr != NULL){
		if(ITEM < ptr -> info){
			LOC = SAVE;
			return;
		}
		SAVE = ptr;
		ptr = ptr -> link;
	}

	LOC=SAVE;
 	return;
 }

int main()
{

    int choice = 1,ITEM = 0;
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
	printf("Enter the ITEM you want to add in the Linked List:");
	scanf("%d", &ITEM);
	findA(ITEM);

	/*Insert a new node in any location of the given Linked List*/
	AVAIL  = (NODE *)malloc(sizeof(NODE));
	if(AVAIL == NULL){
		printf("The Avail List is overflown");
		return;
	}
	NEW_NODE = AVAIL;
	NEW_NODE -> info = ITEM;

	if(LOC == 0){
		NEW_NODE -> link =start;
		start = NEW_NODE;
	}
	else{

		NEW_NODE -> link = LOC -> link;
		LOC -> link = NEW_NODE;
	}

	fflush(stdin);
	ptr = start;
    while(ptr != NULL){
		printf("%d => ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("NULL\n");


return 0;
}
