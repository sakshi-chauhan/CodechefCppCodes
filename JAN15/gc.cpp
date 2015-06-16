#include<iostream>
#define rep(i,N) for(i = 0 ; i < N ; i++)

int main(){
    
    int A[10];
    int n,i;
    bool flag;
    
    std::cin>>n;
    rep(i,n)
            std::cin>>A[i];
    int gc=1,gcd=2;
    while( gcd <= A[0] ){
           flag=0;
           for( i = 0 ; i< n ; i++)
                if( A[i] % gcd ){
                    flag=1;
                    break;   
                }
           
           if(!flag)
                    gc = gcd;
           gcd++;
           
                    
    }
    std::cout<<gc;
    return 0;    
    
}
