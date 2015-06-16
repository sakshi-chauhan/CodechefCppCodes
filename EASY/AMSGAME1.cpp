#include<iostream>
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

int main(){
    int t,n,res;
    int a[1005];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               for(int i=0;i<n;i++)
                       std::cin>>a[i];
               res=ArrayGCD(a,0,n-1);                   
               std::cout<<res<<'\n';
    }
    return 0;    
}
