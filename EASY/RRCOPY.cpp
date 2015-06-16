#include<iostream>
#include<cstring>

int main(){
    int t,n,in,count;
    int num[100006];
    std::cin>>t;
    
    while(t--){
               std::cin>>n;
               count=0;
               memset(num,0,sizeof(num));
               for(int i=0;i<n;i++){
                       std::cin>>in;
                       if(num[in]==0){
                           num[in]=1; 
                           count++;
                       }                      
               }                                
               std::cout<<count<<'\n';
    }    
    
    return 0;    
}
