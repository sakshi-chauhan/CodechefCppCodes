#include<iostream>
#include<cstring>

int main(){
    int t,n,i,count;
    std::string str;
    bool explode[1010];
    
    std::cin>>t;    
    
    while( t-- ){
           
           std::cin>>n;
           std::cin>>str;       
                  
           i = 0;
           count = 0;
           memset(explode,0,sizeof(explode));
           
           if( str[i] == '1' ){
               explode[i] = 1;
               explode[i+1] = 1;  
               count += 2;  
           }
           i++;
           while( i < n-1 ){
                  if( str[i] == '1' ){
                      
                      if( explode[i] == 1 ){
                          explode[i+1] = 1;    
                          count += 1;
                      }
                      
                      else if( explode[i-1] == 1 ){
                           explode[i] = 1; 
                           explode[i+1] = 1; 
                           count += 2;     
                      }
                      
                      else{
                           explode[i-1] = 1; 
                           explode[i] = 1; 
                           explode[i+1] = 1;
                           count += 3;     
                      }
                  }       
                  
                  i++;
           }
           if( str[i] == '1' && explode[i] == 0 ){
                   if( explode[i-1] == 0 )
                       count += 2;
                   else
                       count += 1;        
                  
           }
               
           std::cout<<n-count<<'\n';
    }
    
    return 0;
    
}
