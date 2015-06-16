#include<iostream>
int main(){
    int t,n,c,candy,total;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               std::cin>>c;
               total=0;
               while(n--){
                      std::cin>>candy;    
                      total+=candy;               
               }           
               if(total<=c)
                           std::cout<<"Yes"<<'\n';
               else
                           std::cout<<"No"<<'\n';            
    }
    return 0;    
}
