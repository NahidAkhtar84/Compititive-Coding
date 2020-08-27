#include<bits/stdc++.h>
using namespace std;

int Beg=0,End=0,Loc=0,Top=-1,Right=0,Left=0,Upper[10],Lower[10],Temp=0,N,A[10001];

int quick(int A[], int N, int Beg, int End, int Loc){
    Left=Beg;
    Right=End;
    Loc=Beg;

    Right:
        while(A[Loc]<A[Right] && Loc!=Right){
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
            while(A[Left]<A[Loc] && Left!=Loc){
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
}

int main(){
cout<<"Enter the amount of Numbers You want to Quick sort :"<<endl;
cin>>N;
cout<<"Enter The Numbers Baby :"<<endl;
for(int i=0;i<N;i++){
    cin>>A[i];
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
cout<<"THe Array after Quick sort is :"<<endl;
for(int i=0;i<N;i++){
    cout<<"Element : "<<i<<" is : "<<A[i]<<endl;
}
return 0;
}
