#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x=0,j,quizMarks[4];
    while(x<10){
            cout<<"Enter the quiz marks of student : "<<x+1<<" is :"<<endl;
        for(j=0;j<4;j++){
            cin>>quizMarks[j];
        }
          for(j=0;j<4;j++){
            cout<<"Quiz : "<<j+1<<" is : "<<quizMarks[j]<<endl;
        }
        int n=4,k=1,temp=0;
        while(k<n-1){
            int ptr=0;
            while(ptr<n-k){
                if(quizMarks[ptr]>quizMarks[ptr+1]){
                    temp=quizMarks[ptr];
                    quizMarks[ptr]= quizMarks[ptr+1];
                    quizMarks[ptr+1]=temp;
                }
                ptr++;
            }
            k++;
            ptr=0;
        }
        n=4;
        k=1;
        temp=0;

        int l;
        float sum=0;
        cout<<"Sorted array is : "<<endl;
        for( l=0;l<4;l++){
            cout<< quizMarks[l]<<endl;
        }
        cout<<"Best 3 marks of Quizs are :"<<endl;
        for(l=3;l>0;l--){
            cout<< quizMarks[l]<<endl;
            sum=sum+quizMarks[l];
        }
        float avg=sum/3;
        cout<<"Average marks of student : "<<x+1<<" is : "<<avg<<endl;
    x++;
    }

}
