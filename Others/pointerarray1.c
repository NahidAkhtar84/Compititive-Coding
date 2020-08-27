#include<stdio.h>
const int max=3;
int main(){
int arr[10];
int i,*ptr;
char *citypark[3]={"mania","tania","julia"};
char *mint;
for(i=0;i<max;i++){
    scanf("%d", &arr[i]);
}
printf("\n");
ptr=arr;
for(i=0;i<max;i++){
    printf("%d\n", *(ptr+i));
    printf("%s\n",citypark[i]);
}
}
