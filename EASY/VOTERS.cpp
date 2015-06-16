#include<iostream>
int main(){
    long long n1,n2,n3,n,i,k,count=0;
    long long a[1000000];
    std::cin>>n1>>n2>>n3;
    n=n1+n2+n3;
    for(i=0;i<1000000;i++)
        a[i]=0;
    for(i=0;i<n;i++){
        std::cin>>k;
        a[k]++;                              
    }    
    for(i=0;i<1000000;i++){
        if(a[i]>1)
           count++;                                          
    }
    std::cout<<count<<'\n';
    for(i=0;i<1000000;i++){
        if(a[i]>1)
           std::cout<<i<<'\n';                                          
    }
    return 0;    
}
