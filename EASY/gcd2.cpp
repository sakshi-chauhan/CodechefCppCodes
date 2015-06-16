#include<stdio.h>
#include<conio.h>
 
int ArrayGCD(int *a, int first, int last);
 
int main(void)
{
    int a[20], n = 0, i = 0, gcd = 0;
    printf("\n Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf(" Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    gcd = ArrayGCD(a,0,n-1);
    printf("\n\tThe greatest common divisor is: %d",gcd);
    getch();
    return 0;
}
int ArrayGCD(int *a, int first, int last)
{
    int x = 0, y = 0, gcd = 0;
    if(first == last)
    {
        gcd = a[first];
        return gcd;
    }
    else
    {
        x = ArrayGCD(a,first,(first+last)/2);
        y = ArrayGCD(a,(first+last)/2+1,last);
        if(x < 0)
        {
            x = -x;
        }
        if(y < 0)
        {
            y = -y;
        }
        while(x != y)
        {
            if(x > y)
            {
                x = x-y;
            }
            else
            {
                y = y-x;
            }
        }
        gcd = x;
        return gcd;
    }
}
