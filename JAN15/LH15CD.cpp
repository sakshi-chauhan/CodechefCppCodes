#include<iostream>

int main(){
    
    int T,N;
    long long int D,sum;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N>>D;
           
           if( N == 1 ){
               sum = 0;
               for( long long int i = 0 ; i < D ; i++ )
                    sum += (i*i);    
               
               std::cout<<sum<<"\n";
           }       
           
    }
    
    return 0;
        
}
