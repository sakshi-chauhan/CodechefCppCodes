#include<iostream>
int main(){
    int t,n;
    std::cin>>t;
    while(t--){
               std::cin>>n;           
               if(n%2)
                      std::cout<<n-1<<'\n';
               else
                      std::cout<<n<<'\n';       
    }
    return 0;
}
