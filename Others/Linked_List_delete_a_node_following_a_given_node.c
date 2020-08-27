#include<stdio.h>
int main()
{
    struct node{
    int info;
    struct node *link;
    };
    typedef struct node Node;
    Node *temp,*ptr=NULL, *start=NULL,*loc=NULL,*locp=NULL;
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

    printf("Enter the element you want to delete\n");
    scanf("%d", &item);
    loc=start;
    while(loc !=NULL){
        if(item==loc->info){
            break;
        }
        locp=loc;
        loc=loc->link;
    }

    if(loc==NULL){
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
