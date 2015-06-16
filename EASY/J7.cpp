#include<iostream>
#include<cmath>
#include<iomanip>
int main(){
    int t,p,s;
    std::cin>>t;
    while(t--){
               std::cin>>p;
               std::cin>>s;
               std::cout<<std::setprecision(2)<<std::fixed<<(pow((p-(sqrt(pow(p, 2)-(24*s))))/12, 2)*((p/4)-(2*((p-(sqrt(pow(p, 2)-(24*s))))/12))))<<'\n';           
    }
    return 0;    
}
