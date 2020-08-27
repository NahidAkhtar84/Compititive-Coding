#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
char text[10000];
int a,n=1;

while(gets(text)){
   a=strlen(text);
   for(int i=0;i<a;i++){
    if(text[i]=='"'){
        if(n%2==1){
            cout<<"``";
        }
        else{
            cout<<"''";
        }
   }
   else{
    cout<<text[i];
   }
}
cout<<"\n";
}
}
