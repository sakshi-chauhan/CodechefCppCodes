#include<iostream>
int gcd(int a,int b){
    if(b>a)
           return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}

int main(){
    int T,N;
    int A[1100];
    std::cin>>T;
    while(T--){
        std::cin>>N;
        for(int i=0;i<N;++i)
                std::cin>>A[i];
        int res = A[0];
        for(int i=1;i<N;++i)
                res=gcd(res,A[i]);
        std::cout<<res<<'\n';
    }
    return 0;
}
