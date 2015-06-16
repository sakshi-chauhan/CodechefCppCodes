#include<iostream>
#include<algorithm>
#include<cstdlib>

bool cmp( int a , int b ){
     
     return a>b;     
     
}

int main(){
    
    int T,N;
    int* arr;
    int sum ;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N;
           sum = 0;
           arr = (int*)malloc(N*sizeof(int));
                  
           for( int i = 0 ; i < N ; i++ ){
                
                std::cin>>arr[i];     
                
           }
           
           std::sort(arr,arr+N,cmp);
           
           if( N == 1)
               std::cout<<arr[0]<<"\n";
           
           else if( N == 2 || N == 3 )
               std::cout<<arr[0]+arr[1]<<"\n";
           
           else{
                
               for( int i = 0 ; i < N ; i += 4 ){
                    
                     sum += arr[i];//+arr[i+1];
                     if( i+1 < N )
                         sum += arr[i+1];
                         
               } 
               
               std::cout<<sum<<"\n";     
                
           }         
    }
    
    return 0;
        
}
