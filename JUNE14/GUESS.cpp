#include<iostream>
int main(){
    long long t,n,m;
    std::cin>>t;
    while(t--){
               std::cin>>n>>m;
               if((n*m)%2==0)
                  std::cout<<"1/2\n";                  
               else
                  std::cout<<(n*m)/2<<"/"<<n*m<<'\n';              
    }
    return 0;    
}
