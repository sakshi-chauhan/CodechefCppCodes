#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10]={4,4,4,4,4,4,4,4,4,4};
    int i;
    int j;
    int minimum = A[0];
    int GCD;
    int temp;

    for (i=1;i<9;i++)
    {
        if( A[i] < minimum)
        {
            minimum = A[i];
        }
    }

    for (i=1; i < minimum/2; i++)
    {
        for (j = 0; j < 9;j++)
        {
            GCD = 2*i;
            temp = ((A[j])/(GCD));
            int check = temp%1;
            if (check == 0)
                break;
        }
    }

    printf("The Greates Common Denominator is: %d", GCD);
    system("pause");
    return 0;
}
