#include<iostream>

int main(){
    
    std::ios::sync_with_stdio(false);
    long long T,n;
    long long result;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>n;
           
           result = (n * (n+3) / 2);              
           
           std::cout<<result<<'\n';
    }
    
    return 0;
        
}
