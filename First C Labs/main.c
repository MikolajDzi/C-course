#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int b1,b2;
    int shift = 0;
    int c = 0;
    char oper;
    printf("Please give binary numbers. ");
    scanf("%d",&b1);
    scanf("%d",&b2);
    fflush(stdin);
    scanf("%c",&oper);

    switch(oper)
    {
        case '|':
        c = b1 | b2;
        printf("Result of OR operation in decimal. %d", c);
        printf(" Result of OR operation n hexadecimal. %x", c);
        break;

        case '&':
        c = b1 & b2;
        printf("Result of AND operation in decimal. %d", c);
        printf(" Result of AND operation in hexadecimal. %x", c);
        break;

        case '~':
        c = ~b1;
        printf("Result of NOT operation in decimal. %d", c);
        printf(" Result of NOT operation in hexadecimal. %x", c);
        break;

        case '<':
        printf("Please give the number of digits you want to shift the number.\n");
        scanf ("%d",&shift);
        c = b1<<shift;
        printf("Result of SHIFT LEFT operation in decimal. %d", c);
        printf(" Result of SHIFT LEFT operation in hexadecimal. %x", c);
        break;

        case '>':
        printf("Please give the number of digits you want to shift the number.\n");
        scanf ("%d",&shift);
        c = b1>>shift;
        printf("Result of SHIFT RIGHT operation in decimal. %d", c);
        printf(" Result of SHIFT RIGHT operation in hexadecimal. %x", c);
        break;
    }
    return 0;
}
