#include<stdio.h>
int main()
{
    struct node{
    int info;
    struct node *link;
    };
    typedef struct node Node;
    Node *start, *temp, *ptr=NULL;
    start=NULL;
    int choice=1;
    int num=0;
    while(choice){
    temp=(Node *)malloc(sizeof(Node));
    printf("Do you want to insert an element ?\n");
    scanf("%d", &temp->info);
    num++;
    if(start !=NULL){
        ptr->link=temp;
        ptr=temp;
    }
    else{
        start=ptr=temp;
    }
    printf("Do you want to continue (No='0') and (Yes='Any value')?\n");
    scanf("%d", &choice);
    }
    ptr->link=NULL;
    ptr=start;
    printf("The status of the linked list is :\n");
    while(ptr!=NULL){
        printf("%d >> ",ptr->info);
        ptr=ptr->link;
    }
    printf("Null\n");
    printf("Number of element : %d\n",num);
}
