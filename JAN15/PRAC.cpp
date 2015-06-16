#include<iostream>
#include<iomanip>
#include<cmath>

long double pos( long double n ){
     
     return n<0?-n:n;     
     
}

int main(){
    
    int T;
    long double s1,s2,res,A,B,C;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>A>>B>>C;
           
           s1 = (A+B+C)/2;
          
           res = A*B*C/4;
          
           s2 = sqrt(pos(s1)*pos(s1-A)*pos(s1-B)*pos(s1-C));
          
           res /= s2;
           
           std::cout<<std::setprecision(2)<<std::fixed<<res<<"\n";
    }
    
    return 0;    
}
