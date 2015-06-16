#include<iostream>
int main(){
    int t,n;
    std::cin>>t;
    while(t--){
               std::cin>>n;           
               if(n%2)
                      std::cout<<"BOB\n";
               else
                      std::cout<<"ALICE\n";
    }
    return 0;    
}
