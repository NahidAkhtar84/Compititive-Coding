#include<stdio.h>
int main()
{
    int Top=-1,Maxstk,choice=1,Item=0,Stack[10001],i;
    scanf("%d", &Maxstk);
    while(choice){
        if(Top==Maxstk-1){
            printf("Stack is overFlown,,,,\n");
            choice=0;
        }
        else{
            printf("Enter the item you want to add in the Stack\n");
            scanf("%d", &Item);
            Top=Top+1;
            Stack[Top]=Item;
            printf("Do you want to Continue ?(0 / Anything)\n");
            scanf("%d", &choice);
        }
    }
    printf("The values in the stack are :\n");
    for(i=0;i<=Top;i++){
        printf("%d\n", Stack[i]);
    }

    return 0;
}
