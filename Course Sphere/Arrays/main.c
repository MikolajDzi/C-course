#include <stdio.h>
#include <stdlib.h>

#define names 6
#define signs 12

int main()
{
    /*
        Array definition


    int cart[5] = {1,2,3,4,5};

    printf("Here is the third element of the array: %d",cart[2]);
    */

    /*
        Array readout


    int cart[arr_size]={3,4,1,4,5};

    for(int i =0 ; i<arr_size; i++)
    {
        printf("%d\n",cart[i]);
    }
    */

    /*
        Writing data to the board


    double cart[arr_size];

    for(int i =0; i<arr_size;i++)
    {
        cart[i]= i*65%3/75;
    }
    for(int i =0; i<arr_size;i++)
    {
        printf("%lf\n",cart[i]);
    }

    int i = 0,sum;
    int cart[arr_size];
    while(i<arr_size)
    {
        printf("Please insert value %d:",i+1);
        scanf("%d",&cart[i]);
        i++;
    }
    for(int j=0;j<arr_size;j++)
    {
        sum +=cart[j];
    }

    printf("Here is the sum of the inserted values: %d", sum);
    */

    /*
        Double dimensional arrays


    int table [columns][arr_size] = {{1,2,3,4,5},{6,7,8,9,10}};

    //printf("%d",table[0][0]);
    //printf("%d",table[1][3]);
    for(int i = 0; i < columns; i++)
    {
        for(int j = 0; j <arr_size; j++ )
        {
            printf("%d ",table[i][j]);
        }
        puts("\n");
    }
    */


    char name[names][signs] = {"Tomek", "Iwona", "Basia", "Kinga", "Robert", "Darek"};

    for(int i = 0; i < names; i++)
    {
        printf("%s \n", name[i]);
    }

    return 0;
}
