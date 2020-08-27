
#include<stdio.h>
#include<string.h>
int main()
{
int i,n=0;
char text[100000];
while(gets(text))
{
for(i=0;i<strlen(text);i++)
    {
    if(text[i]=='"')
        {
        n=n+1;
        if(n%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",text[i]);
    }
printf("\n");
}
return 0;
}
