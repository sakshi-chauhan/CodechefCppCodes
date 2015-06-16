#include<iostream>
int main(){
    int t,n;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               if(n%4==1)
                         std::cout<<"ALICE\n";
               else
                         std::cout<<"BOB\n";                     
    }
    return 0;    
}
