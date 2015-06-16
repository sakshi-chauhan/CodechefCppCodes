#include<iostream>
#include<cstdio>
#include<cstdlib>

int main(){
    
    int T,N;
    bool flag;
    long long int* arr,sum,leftsum;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N;       
           arr = (long long int*)malloc( N * sizeof(long long int));
           sum = 0;
           leftsum = 0;
           flag = 0;
           
           for( int i = 0 ; i < N ; i++ ){
                std::cin>>arr[i];
                sum += arr[i];
           }
           
           for( int i = 0 ; i <= N ; i++ ){
                
                sum -= arr[i];
                
                if( leftsum == sum ){
                    std::cout<<arr[i]<<"\n";
                    flag = 1;
                    break;
                }
                else         
                    leftsum += arr[i];         
           }
           
           if( !flag )
               std::cout<<"NO EQUILIBRIUM\n";     
    }
    
    return 0;
        
}
