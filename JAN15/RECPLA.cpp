#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<climits>

int main(){
    
    int T,N;
    long long int C,sum,diff,min,max;
    long long int* arr;
    bool flag;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N>>C;
           
           arr=(long long int*)malloc(N*sizeof(long long int)); 
           sum = 0;
           //min = LLONG_MAX;
           max = LLONG_MIN;
           flag = true;
           
           for( int i = 0 ; i < N ; i++ )
                std::cin>>arr[i];
           
            
           if( C == 0 ){
               
               std::cout<<"0\n";
               continue;
                   
           } 
           
           if( N == 1 ){
               
               if( C < arr[0] )
                   std::cout<<C<<"\n";
               
               else
                   std::cout<<C - arr[0]<<"\n";   
                
               continue;     
                   
           }    
           
           std::sort(arr,arr+N);  
            
           if( arr[0] > C ){
               std::cout<<C<<"\n";              
               continue;
           }
          
           for( int i = 0 ; i < N && flag && arr[i] <= C ; i++ ){
                sum = arr[i];
                
                
                for( int j = i+1 ; j < N && arr[j] <= C ; j++ ){
                     
                     if( sum + arr[j] <= C )
                         sum += arr[j];
                     else{
                         if( arr[i] + arr[j] <= C )
                             sum = arr[i]+arr[j];
                         else
                             break;
                     }    
                    
                     if( sum > max ){
                         max = sum;
                         if( max == C ){
                             flag = false;
                             break;
                         }
                     }
                   
                }
                
                if( sum > max ){
                         max = sum;
                         if( max == C ){
                             
                             break;
                         }
                }
                
                
           }
           
           if( max <= C )   
               std::cout<<C - max<<"\n";
           else
               std::cout<<C<<"\n";    
    }
    
    return 0;    
    
}
