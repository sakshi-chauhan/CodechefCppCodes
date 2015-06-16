#include<iostream>
#include<cmath>
int main(){
    int t,n,count;
    int a[12];
    std::cin>>t;
    for(int i=0;i<12;i++)
            a[i]=pow(2,i);
    while(t--){
               count=0;
               std::cin>>n;
               for(int i=11;i>=0;i--){
                       if(n>=a[i]){
                            n-=a[i];
                            count++;
                            i++;       
                       }        
               } 
               std::cout<<count<<'\n';          
    }        
    return 0;    
}
