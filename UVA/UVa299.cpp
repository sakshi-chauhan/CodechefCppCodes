#include<iostream>
#include<cstdio>
#include<cstdlib>

int main(){
    
    int N,L,count;
    int* arr;
    
    std::cin>>N;
    
    while( N-- ){
           
           std::cin>>L;       
           arr = (int*)malloc(sizeof(int)*L);
           count=0; 
           
           for(int i = 0 ; i < L ; i++)
                   std::cin>>arr[i];
           
           for( int i = 0 ; i < L-1 ; i++){
                   
                   for( int j = i+1 ; j < L ; j++ ){
                        
                        if( arr[i] > arr[j] )
                            count++;     
                   }        
                   
           }        
           std::cout<<"Optimal train swapping takes "<<count<<" swaps."<<'\n';      
    }
    
    return 0;    
    
}
