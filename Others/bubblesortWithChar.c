#include<stdio.h>
#include<conio.h>
int main()
{
    int len,i,j;
    char str[50],temp;
    printf("Enter the string :\n");
    gets(str);
    len=strlen(str);
    printf("%d\n",len);
    for(i=1;i<len-1;i++){
        for(j=0;j<len-i;j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("%s",str);

}
