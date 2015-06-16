#include<iostream>
//#include<cmath>

long long int pow(long long int a, long long int b, int MOD)
    {
    long long int x=1,y=a;
    while(b > 0)
    {
    if(b%2 == 1)
    {
    x=(x*y);
    if(x>MOD) x%=MOD;
    }
    y = (y*y);
    if(y>MOD) y%=MOD;
    b /= 2;
    }
    return x;
    }

int main(){
    
    int start = 1;
    int sum=0;
    
    while( start < 15 ){
           
           long long int  res = pow(start , (start*start), 9);
           std::cout<<res<<" ";
           sum = (sum + res)%9;
           std::cout<<sum<<"\n";
           
           start++;       
    }
    std::cout<<"\n";
    std::cout<<sum;
    return 0;    
}
