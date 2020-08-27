#include<stdio.h>
int main()
{
    int queue[10001],n,front=-1,rear=-1,i,choice=1,item;
    printf("Enter the number of element you want to insert :\n");
    scanf("%d", &n);
    while(choice)
    {
        if(front==0 && rear==n-1){
            printf("Queue is overflown !\n");
            break;
        }
        printf("Enter the elements :\n");
        scanf("%d", &item);
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        else if(rear==n-1){
            rear=0;
        }
        else{
            rear=rear+1;
        }
        queue[rear]=item;
        printf("Do you want to continue ?\n");
        scanf("%d", &choice);
    }
    printf("The Queue set is :\n");
    for(i=front;i<=rear;i++){
        printf("%d\n",queue[i] );
    }
    choice=1;
    while(choice){
        if(front==-1){
            printf("queue is underflown !\n");
            break;
        }
        item=queue[front];
        printf("Item %d has been deleted\n", item);
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==n-1){
            front=0;
        }
        else{
            front=front+1;
        }
        printf("Do you want to continue ?\n");
        scanf("%d", &choice);
    }
     printf("The Updated Queue set is :\n");
    for(i=front;i<=rear;i++){
        printf("%d\n",queue[i] );
    }
}
