#include<iostream>
#include<cmath>
int main(){
    int t,b,ls;
    double rsmin,rsmax;
    std::cin>>t;
    while(t--){
               std::cin>>b>>ls;  
               rsmin=sqrt(pow(ls,2)-pow(b,2));
               rsmax=sqrt(pow(b,2)+pow(ls,2));  
               std::cout<<rsmin<<" "<<rsmax<<'\n';       
    }
    return 0;    
}
