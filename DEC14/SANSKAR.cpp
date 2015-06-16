#include<iostream>
#include<cmath>

int main(){
    
    int t,n,k,count;
    unsigned long long int sum1,res,sub,temp,sum , In[25];
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n>>k;
           sum = 0;
           
           for( int i = 0 ; i < n ; i++ ){
           
                std::cin>>In[i];       
                sum += In[i];
                
           }
           
           if( sum % k != 0 )
               std::cout<<"no\n";
               
           else{
                
                sub = pow(2,n) - 1;
                res = sum / k ;
                
               while( sub ){
                      
                      
                      temp = sub;
                      sum1 = 0;
                      
                      for(int j = 0 ; j < n ; j++ ){
                              
                              if( temp & 1 )
                                 sum1 += In[j];         
                              
                              temp >>= 1;
                              
                      }  
                      
                      if( sum1 == res )
                          count++;   
                      
                      sub--;
               }     
               
               if( count == k )
                   std::cout<<"yes\n";
               
               else
                   std::cout<<"no\n";     
                
           }    
    }
    
    return 0;    
    
}
