#include<stdio.h>
int main()
{
    float temp,temp2;
    printf("Enter the Temperature in Fahrenheit scale :\n");
    scanf("%f", &temp);
    temp2=(temp-32)/1.8;
    printf("The converted temperature in Celsius : \n");
    printf("%f degree celsius\n", temp2 );
    return 0;
}
