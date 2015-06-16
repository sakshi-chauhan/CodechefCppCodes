#include<iostream>
int main(){
    long long n,c,sum=0;
    std::cin>>n;
    for(int i=0;i<n;i++){
            std::cin>>c;
            sum+=c;
    }
    if(sum==n*(n+1)/2)
           std::cout<<"YES\n";
    else
           std::cout<<"NO\n";                  
    return 0;    
}
