#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        If, else if, else statements

    int speed;
    //speed = 50;
    printf("Please tell me your speed: ");
    scanf("%d", &speed);
    if (speed >50 && speed <=70)
    {
        printf("Please slow down you are going to fast, you are in 1 level of fine!");
    }
    else if (speed >70 && speed <=100)
    {
        printf("Please slow down you are going to fast, you are in 2 level of fine!");
    }
    else if (speed >100)
    {
        printf("Please slow down you are going to fast, you are in 3 level of fine and you will loose your license!");
    }
    else
        printf("Thank you for driving under limit, keep it up!");

    */

    /*
        Switch case


    char zone;

    printf("Choose your zone: [A,B or C]: ");
    scanf("%c", &zone);

    switch(zone)
    {
        case 'A':
            printf("The cost of parking 1$.");
            break;
        case 'B':
            printf("The cost of parking 3$.");
            break;
        case 'C':
            printf("The cost of parking 5$.");
            break;
        default:
            printf("No such zone.");
            break;
    }


    float a,b;
    char sign;
    printf("Please choose which calculation you want to perform [+][-][*][/]: ");
    scanf("%c",&sign);
    printf("Please instert two numbers for calculations. \nNumber one: ");
    scanf("%f",&a);
    printf("Number two: ");
    scanf("%f",&b);

    switch(sign)
    {
    case '+':
        printf("Result of addition: %f", a+b);
        break;
    case '-':
        printf("Result of subtraction: %f", a-b);
        break;
    case '*':
        printf("Result of multiplication: %f", a*b);
        break;
    case '/':
        printf("Result of division: %f", a/b);
        break;
    default:
        printf("Something wrong, please verify is you inserted data properly.");
        break;
    }
    */


    /*
        For loop


    int counter;

    for(counter = 0; counter<10; counter++)
    {
        printf("%d. Hello my G!\n",counter+1);
    }
    printf("\n");
    for(counter = 10; counter>0; counter--)
    {
        printf("%d. Hello my G!\n",counter);
    }
    char letter = 'a';
    for(counter = 0; counter <=25; counter++)
    {
        printf("Here is the alphabet: %c\n",letter + counter);
    }

    */

    /*
        Nested for loops



    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)
        {
            if(i*j<10)
                {
                  printf("%d  ", i*j);
                }
            else
            printf("%d ", i*j);
        }
        printf("\n");
    }
    */

    /*
        While loop


        int counter =1;
        while(counter<=10)
        {
            printf("Loop is OK! \n");
            counter++;
        }

    */

    /*
        Do while loop

        int counter =1;

        do
        {
            printf("Loop is OK! \n");
            counter++;
        }while(counter<10);
    */
    /*
        Loop interrupts and continuation
    */

    int counter;

    for(counter=0; counter<=10; counter++)
    {
        if(counter%2 ==0)
        {
            printf("%d\n",counter);
        }
    }
    puts("-------------------------------------------");
    for(counter=0; counter<=10; counter++)
    {
        if(counter%2 ==0) continue;
        printf("%d\n",counter);
    }
    puts("-------------------------------------------");
    for(counter=0; counter<=10; counter++)
    {
        if(counter%2 ==1) continue;
        printf("%d\n",counter);
    }


    return 0;
}
