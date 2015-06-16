#include<iostream>
#include<cmath>
int main(){
    long long int t,n,res,r,i;
    std::cin>>t;
    while(t--){
               std::cin>>n; 
               i=1;  
               r=n/pow(2,i);        
               while(r>0){
                         res+=r;
                                     
               }
               res+=1;
               std::cout<<res<<'\n';
    }
    return 0;    
}
