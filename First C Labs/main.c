#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int b1,b2,binar;
    int shift = 0;
    int c = 0;
    char oper;
    printf("Please give numbers in decimal system: ");
    scanf("%d",&b1);
    scanf("%d",&b2);
    fflush(stdin);
    printf("Now please choose one of the following operators [| & ~ < >]: ");
    scanf("%c",&oper);

    switch(oper)
    {
        case '|':
        c = b1 | b2;
        break;

        case '&':
        c = b1 & b2;
        break;

        case '~':
        c = ~b1;
        break;

        case '<':
        printf("Please give the number of digits you want to shift the number.\n");
        scanf ("%d",&shift);
        c = b1<<shift;
        break;

        case '>':
        printf("Please give the number of digits you want to shift the number.\n");
        scanf ("%d",&shift);
        c = b1>>shift;
        break;
    }
    printf("Here is the representation of the result in decimal system: %d",c);
    printf("\n");
    printf("Here is the representation of the result in hexadecimal system: %x",c);
    printf("\n");
    printf("Here is the representation of the result in binary system: \n");
    for (int i = 31; i>= 0; i--)
        {
            binar = c >> i;

            if(binar & 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
   printf("\n");

    return 0;
}
