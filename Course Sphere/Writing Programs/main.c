#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*
        Variables

    char merch[15] = "chocolate";
    float price = 6.50;
    int vat = 23;
    double brut =7.99;

    printf("Name of the merchandise: %s \n price of the merchandise: %f \n VAT constant: %d \n final price after VAT: %f", merch, price, vat, brut);
    */

    /*
        Variable values

    int year, day;
    char month [9]= "march";
    year = 2020;
    day = 27;
    printf("Date: %d %s %d", year,month,day);
    return 0;
    */

    /*
        Variables length


    int varA, varB;
    varA = 10;
    varB = 20;

    printf("Variable A = %i %d\nVariable B = %i %d \n",varA,varA, varB, varB);

    varA = 15;
    varB = 25;

    printf("Variable A = %i %d\nVariable B = %i %d \n",varA,varA, varB, varB);
    test ();
    printf("Variable A = %i %d\nVariable B = %i %d \n",varA,varA, varB, varB);
    */


    /*
        Constants


    const int year = 2020;
    printf("Year: %d \n", year);
    //year = 1975; this is the difference between constants and variables, constants are only for the read-out
    printf("Year: %d \n", year);
    */

    /*
        Pointers

    int merchandise;
    int *points;
    merchandise = 123;

    points = &merchandise;
    *points = 256;
    printf("Merch: %d \n", *points);
    printf("Merch is in the cell: %p \n", points);

    puts("--------------------------------------------------");
    printf("Merch: %d \n", merchandise);
    printf("Merch is in the cell: %p \n", &merchandise);
    */

    /*
        Actions on variables
    */

    int A = 1, B = 2, C = 3;
    int result = 0;
    result = A+B;
    printf("Result of addition of A and B: %d \n",result);
    result = A+C;
    printf("Result of addition of A and C: %d \n",result);
    result = B+C;
    printf("Result of addition of B and C: %d \n",result);

    result = A-B;
    printf("Result of subtraction of A and B: %d \n",result);
    result = A-C;
    printf("Result of subtraction of A and C: %d \n",result);
    result = B-A;
    printf("Result of subtraction of B and A: %d \n",result);
    result = B-C;
    printf("Result of subtraction of B and C: %d \n",result);
    result = C-A;
    printf("Result of subtraction of C and A: %d \n",result);
    result = C-B;
    printf("Result of subtraction of C and B: %d \n",result);

    result = A*B;
    printf("Result of multiplication of A and B: %d \n",result);
    result = A*C;
    printf("Result of multiplication of A and C: %d \n",result);
    result = B*C;
    printf("Result of multiplication of B and C: %d \n",result);

    float result2 =0;
    result2 = A/B;
    printf("Result of division of A and B: %f \n",result2);
    result2 = A/C;
    printf("Result of division of A and C: %f \n",result2);
    result2 = B/A;
    printf("Result of division of B and A: %f \n",result2);
    result2 = B/C;
    printf("Result of division of B and C: %f \n",result2);
    result2 = C/A;
    printf("Result of division of C and A: %f \n",result2);
    result2 = C/B;
    printf("Result of division of C and B: %f \n",result2);


    return 0;
}
/*

    Function is from part Variables lenght;

void test()
{
    int varA, varB;
    varA = 50;
    varB = 100;

  printf("Variable A = %i %d\nVariable B = %i %d \n",varA,varA, varB, varB);

};
*/
