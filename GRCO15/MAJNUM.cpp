#include<iostream>
#include<cstdio>
#include<cstdlib>

long long int candidate(long long int* arr , int size ){
    
    long long int maj = 0 ;
    int count = 1;
    
    for(int i = 1 ; i < size ; i++){
            
            if( arr[i] == arr[maj] )        
                count++;
            else
                count--;
            
            if( count == 0 ){
                maj = i;        
                count = 1;
            }
    }
    return arr[maj];
}

bool iscandidate(long long int* arr , int size , int cand ){
     
     int count = 0 ;
     for( int i = 0 ; i < size ; i++ )
          if( arr[i] == cand )
              count++;
     if( count > size/2 )
         return 1;
     
     else                  
         return 0;                  
}

int main(){
    
    int T,N;
    long long int* arr;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N;
           arr = (long long int*)malloc( N * sizeof(long long int) );       
           
           for( int i = 0 ; i < N ; i++ )
                std::cin>>arr[i];
    
           long long int cand = candidate(arr,N);
            
           if( iscandidate(arr,N,cand))
                std::cout<<cand<<"\n";
                
           else
                std::cout<<"NO\n"; 
           
    }
    
    return 0;
        
}
