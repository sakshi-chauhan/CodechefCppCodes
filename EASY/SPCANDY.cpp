#include<iostream>
int main(){
    int t;
    long long n,k,candykid,candymam;
    std::cin>>t;
    while(t--){
               std::cin>>n>>k;
               if(k==0){
                    candykid=0;
                    candymam=n;         
               }           
               else{
                    candykid=n/k;     
                    candymam=n%k;
               }
               std::cout<<candykid<<" "<<candymam<<'\n';
    }
    return 0;    
}
