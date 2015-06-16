#include<iostream>

int main(){
    
    long long start = 100000;
    long long int count = 0;
    long long int num1,num2;
    int f2,tf,l2,f3,l3;
    
    while( start <= 999999 ){
           
           //std::cout<<start;
           f3 = start/1000; 
           l3 = start % 1000;     
           
           f2 = f3/10;
           l2 = start % 100;
           
           tf = (f3%10)*10 + (l3/100);
           
          // std::cout<<" f3 "<<f3<<" l3 "<<l3<<" f2 "<<f2<<" l2 "<<l2<<" tf "<<tf;
          
           if(( f3 % l3 == 0 ) && ( f2 % tf == l2 ) )
                count++;
                
           start++;
    }
    std::cout<<count;
    return 0;    
}
