#include<iostream>
#include<cmath>
#include<algorithm>

int main(){
    
    int t,n,k;
    int arr[25];
    int res,sub,temp,max;
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n>>k;
           
           for( int i = 0 ; i < n ; i++ ){
                
                std::cin>>arr[i];     
                
           }       
           
           max = k;
           sub = pow(2,n) - 1;
           
           while( sub ){
                  
                  res = 0 ;
                  temp = sub;
                  
                  for(int j = 0 ; j < n ; j++ ){
                          
                          if( temp & 1 )
                             res = res ^ arr[j];         
                          
                          temp >>= 1;
                          
                  }  
                  
                  if( res > max )
                      max = res;     
                  
                  sub--;
           }
           
           std::cout<<max<<'\n';
           
    }
    
    return 0;
        
}
