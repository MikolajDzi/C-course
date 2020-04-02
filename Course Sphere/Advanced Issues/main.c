#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    /*
        Part of the Recursive formula


    long factorial(long elem)
    {
    if (elem <2)
        return 1;
    else
        return elem*factorial(elem-1);
    }
    */


int main()
{
    /*
        Time functions

    time_t now;
    time(&now);


    printf("Actual time counted from 01/01/1970: %ld \n",time(NULL));
    printf("Actual time: %s \n",ctime(&now));
    printf("Actual day of the month: %d \n",localtime(&now)->tm_mday);
    printf("Actual month: %d \n",localtime(&now)->tm_mon+1);
    printf("Actual year: %d \n",localtime(&now)->tm_year+1900);
    */

    /*
        Arrays, working with pointer


    int table[] = {11,22,33,44,55,66};

    int *pointer;

    pointer = table;
    *(pointer+3) = 88;
    for (int i =0; i<6;i++)
    {
        printf("Element index %d have value %d \n", i+1, *pointer);
        pointer++;
    }
    */

    /*
        Recursive functions

    long fact;
    printf("Please insert value of which you want to calculate factorial: ");
    scanf("%ld",&fact);
    printf("The factorial of %ld is equal to: %ld",fact,factorial(fact));
    */

    /*
        File output


    FILE *fichier;

    char text[] = "Hello world";

    fichier = fopen("test.txt", "w");
    fprintf(fichier, "%s", text);

    fclose(fichier);
    */


    /*
        File input
    */

    FILE *fichier;

    char text[100];

    fichier = fopen("test.txt", "r");

    while(feof(fichier)==0)
    {
        fscanf(fichier,"%s",text);
        printf("%s ",text);
    }


    fclose(fichier);

    return 0;
}
