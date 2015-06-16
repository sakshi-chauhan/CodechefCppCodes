#include<iostream>
int max(int a,int b){
    return a>b?a:b;    
}
int main(){
    int t,a,b;
    std::cin>>t;
    while(t--){
               std::cin>>a>>b;
               std::cout<<max(a,b)<<" "<<a+b<<'\n';           
    }
    return 0;    
}
