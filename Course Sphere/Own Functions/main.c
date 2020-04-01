#include <stdio.h>
#include <stdlib.h>


/*
    Fucntion declaration

void my_function(void)
{
    puts("My functions!");
}


int main()
{
    my_function();
    puts("Main function!");
    my_function();
    return 0;
}
*/

/*
    Passing arguments and returning value from functions
*/
int sum_up(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

double fahr_to_cels(double temp)
{
    return 5/9*(temp-32);
}

int main()
{
    //int a=5,b=7;
    double temp_f;
    //printf("Here is the result of the sum: %d", sum_up(a,b));
    char perm = 'y';
    while(perm == 'y')
    {
        printf("Please insert temperature in Fahrenheit: ");
        scanf("%lf",&temp_f);
        printf("Here is  temperature in Celsius: %lf\n",fahr_to_cels(temp_f));
        fflush(stdin);
        printf("Do you want to continue or to stop the program? y/n: ");
        scanf("%c",&perm);
        fflush(stdin);
    }
    return 0;
}


