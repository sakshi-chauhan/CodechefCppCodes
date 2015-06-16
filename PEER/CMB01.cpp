#include<iostream>
int reverse(int n){
    int rem=0;
    while(n>0){
    rem = (rem*10) + (n%10);
    n=n/10;
    }
    return rem;
}
int main(){
    int n,n1,n2;
    std::cin>>n;
    while(n--){
               std::cin>>n1>>n2;
               n1=reverse(n1);
               n2=reverse(n2);
               std::cout<<reverse(n1+n2)<<'\n';           
    }
    return 0;    
}
