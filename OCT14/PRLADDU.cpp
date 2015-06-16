#include<iostream>
#include<cmath>

int absl(int n){
    return n<0?-n:n;    
}

int main(){
    
    int T,n,d;
    long long active,sum;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>n;
           active=0;
           sum=0;
           while( n-- ){
                  
                  std::cin>>d;
                  active += d;
                  sum += absl(active);
                         
           }
           
           std::cout<<sum<<'\n';
                  
    }
    
    return 0;
        
}
