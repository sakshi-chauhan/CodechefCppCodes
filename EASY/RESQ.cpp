#include<iostream>
#include<cmath>
int main(){
    int t,n,i,diff,min;
    std::cin>>t;
    while(t--){
               std::cin>>n; 
               min=n;          
               for(int i=sqrt(n);i>=1;i--){
                     if(n%i==0){       
                        diff=n/i-i;
                        if(diff<min){
                           min=diff;
                        }          
                     }  
               }
               std::cout<<min<<'\n';
    }    
    return 0;
}
