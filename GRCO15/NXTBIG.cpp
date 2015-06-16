#include<iostream>
#include<algorithm>
#include<cstdlib>

int main(){
    
    int T,N;
    int* arr;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N;       
           arr = (int*)malloc( N * sizeof(int));
           
           for( int i = 0 ; i < N ; i++ )
                std::cin>>arr[i];
           
           for( int i = 0 ; i < N ; i++ )
                    std::cout<<arr[i];
           std::cout<<"\n";
                     
           if( std::next_permutation(arr,arr+N) ){
               
               for( int i = 0 ; i < N ; i++ )
                    std::cout<<arr[i];
               std::cout<<"\n";
               
           }     
           else
               std::cout<<"NO NXTBIG\n";
    }
        
    return 0;
        
}
