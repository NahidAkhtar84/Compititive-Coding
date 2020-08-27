#include<stdio.h>
int i=0,Beg=0,End=0,Left=0,Right=0,Loc=0,Top=-1,Temp=0,Lower[10],Upper[10],A[10001],N;
int quick(int A[], int N, int Beg, int End, int Loc){
    Left=Beg;
    Right=End;
    Loc=Beg;

    Right:
        while(A[Loc]<A[Right] && Loc !=Right){
            Right=Right-1;
        }
        if(Loc==Right){
            return Loc;
        }
        if(A[Loc]>A[Right]){
            Temp=A[Loc];
            A[Loc]=A[Right];
            A[Right]=Temp;
            Loc=Right;
            goto Left;

        }

        Left:
            while(A[Left]<A[Loc] && Loc !=Left){
                Left=Left+1;
            }
            if(Left==Loc){
                return Loc;
            }
            if(A[Left]>A[Loc]){
                Temp=A[Left];
                A[Left]=A[Loc];
                A[Loc]=Temp;
                Loc=Left;
                goto Right;
            }
            return 0;
}

int main()
{
    printf("Enter the amount of numbers you want to sort :\n");
    scanf("%d", &N);
    printf("Enter the nubers :\n");
    for(i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    if(N-1>1){
            Top=Top+1;
        Lower[Top]=0;
        Upper[Top]=N-1;
    }
        while(Top != -1){
            Beg=Lower[Top];
            End=Upper[Top];
            Top=Top-1;
            Loc=quick(A,N,Beg,End,Loc);

            if(Beg<Loc-1){
                Top=Top+1;
                Lower[Top]=Beg;
                Upper[Top]=Loc-1;
            }

            if(Loc+1<End){
                Top=Top+1;
                Lower[Top]=Loc+1;
                Upper[Top]=End;
            }

        }
        printf("The array after quick sort is :\n");
        for(i=0;i<N;i++){
            printf("element : %d : %d\n", i+1, A[i]);
        }
}
