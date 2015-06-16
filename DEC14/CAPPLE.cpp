#include<iostream>
#include<algorithm>

int main(){
    
    int t,n;
    int arr[100008];
    int count;
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n;       
           
           for( int i = 0 ; i < n ; i++ )
                std::cin>>arr[i];
                
           std::sort( arr , arr + n );     
           
           count = 1;
           for( int i = 1 ; i < n ; i++ ){
                
                     if ( arr[i] != arr[i-1] )
                         count++;
                
           }     
           
           std::cout<<count<<'\n';
    }
    
    return 0;    
    
}
