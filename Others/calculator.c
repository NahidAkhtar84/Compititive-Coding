#include <stdio.h>
int main()
{
    printf("CALCULATOR\n");
    int p,q;
    char mo;


        printf("Enter 1st value\n");
        scanf("%d", &p);

        printf("Enter sign(+,-.*,/)\n");
        scanf("%s",&mo);

        printf("Enter 2nd value\n");
        scanf("%d", &q);

        if (mo =='+')
        {
            printf("The summation of %d and %d is %d\n", p, q, p+q);
        }

        else if (mo =='-')
        {
            printf("The subtraction of %d and %d is %d\n", p, q, p-q);
        }
        else if (mo =='*')
        {
            printf("The multiplication of %d and %d is %d\n", p, q, p*q);
        }

        else if (mo =='/')
        {
            printf("The division of %d and %d is %d\n", p, q, p/q);
        }

        else
        {
            printf("Math Error");
        }
return 0;
}
