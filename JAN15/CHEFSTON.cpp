#include<iostream>
#include<cstdlib>

#define rep(i,N) for(i = 0 ;i < N ; i++)

int main(){
    
    int T,N,i;
    long long int K,max,temp;
    
    long long int* A;
    long long int* B;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N>>K;       
           A = (long long int*)malloc(N*sizeof(long long int));
           B = (long long int*)malloc(N*sizeof(long long int));
           max=0;
           
           rep(i,N)
                   std::cin>>A[i];
           rep(i,N)
                   std::cin>>B[i];
                   
           rep(i,N){
                    temp = (K/A[i])*B[i];
                    
                    if( temp > max )
                        max = temp;  
                        
           }              
           
           std::cout<<max<<'\n';
           
    }
    return 0;
        
}
