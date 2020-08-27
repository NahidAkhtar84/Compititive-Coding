#include<stdio.h>
int main()
{
    int Maxstk,Stack[10001],Top=0,choice=1,Item=0,i;
    printf("Enter the amount of numbers :\n");
    scanf("%d", &Maxstk);
    printf("Enter the values in the Stack :\n");
    Top=Maxstk-1;
    for(i=0;i<=Top;i++){
        scanf("%d",&Stack[i]);
    }
    printf("The values in the stack before PoP are :\n");
      for(i=0;i<=Top;i++){
        printf("%d\n",Stack[i]);
    }

    while(choice){
        if(Top==-1){
            printf("Stack is UnderFlown\n");
            choice=0;
        }
        else{
            Item=Stack[Top];
            Top=Top-1;
            printf("\n Item %d Removed from the Stack\n", Item);
            printf("\nDo you want to pop up the Next Value ?(0/anything)\n");
            scanf("%d", &choice);
        }

    }
    printf("The values in the Stack After Popping Up are :\n");
    for(i=0;i<=Top;i++){
        printf("%d\n", Stack[i]);
    }
    return 0;
}
