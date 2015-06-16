#include<iostream>
#include<cmath>
#include<stack>

#define MOD 1000000007

int main(){
    
    int n;
    bool flag;
    long long arr[105],sub,temp,k,count;
    
    std::cin>>n;
    
    for( int i = 0 ; i < n ; i++ )
         std::cin>>arr[i];
         
    sub = pow(2,n) - 1;
    
    while( sub ){
           
           std::stack<long long> s;       
           temp = sub;
           
           for( int i = 0 ; i < n ; i++ ){
                
                flag = 1;
                
                if( temp & 1 ){
                    
                    if( arr[i] < 0 )
                        s.push(arr[i]);    
                    
                    else{
                         
                        k = s.top();      
                        
                        if( k == -arr[i] )
                            s.pop();
                        
                        else{
                             flag = 0; 
                        }  
                    }
                }     
                
                temp >= 1;
                
           }
           
           if( flag )
               count++;
               
           sub--;
    }    
    
    std::cout<<count; 
    
    return 0;    
    
}
