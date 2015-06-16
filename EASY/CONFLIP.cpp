#include<iostream>
int main(){
    int t,g,i,n,q;
    std::cin>>t;
    while(t--){
               std::cin>>g;
               while(g--){
                          std::cin>>i>>n>>q;
                          if(n%2==0)
                                    std::cout<<n/2<<'\n';
                          else{
                                    if(i==q)
                                            std::cout<<(n-1)/2<<'\n';
                                    else
                                            std::cout<<(n+1)/2<<'\n';             
                          }                     
               }           
    }
    return 0;    
}
