#include<iostream>
#include<climits>
#include<cstdlib>

long long int MaxDif(long long int* arr, int N) {
    long long int diff = arr[1]-arr[0];
    long long int min = 0;
    long long int maxDiff = LLONG_MIN;
    
    for (int i = 1; i < N; i++) { 
        if ( arr[i] < arr[min]) 
            min = i;
        if( min != i )     
            diff = arr[i] - arr[min]; 
        if ( diff > maxDiff ){
              maxDiff = diff;
        }
    }
    return maxDiff;
}


int main(){
    
    int T,N;
    long long int* arr;
    
    std::cin>>T;
    
    while( T-- ){
    
           std::cin>>N;    
           arr = (long long int*)malloc(N*sizeof(long long int));
           
           for( int i = 0 ; i < N ; i++ )
                std::cin>>arr[i];
  
           std::cout<<MaxDif(arr,N)<<"\n";
    }
    
    return 0;
        
}
