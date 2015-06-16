#include<iostream>
#include<cmath>

long long int FactDig( int n ){
     
   double result = 0;

   for( int i = 1 ; i <= n ; i++ ){
        result += (log(i)/log(10));///log(10);
        //std::cout<<result<<"  ";
   }
        
   return result+1;
}

int main(){
    
    int T,N,X;
    int count;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N; 
           
           for( int i = 0 ; i < N ; i++ ){
                
                std::cin>>X;
                count = FactDig(X);   
                std::cout<<count<<" ";
                  
           }      
           std::cout<<"\n";
    }
    
    return 0;
        
}
