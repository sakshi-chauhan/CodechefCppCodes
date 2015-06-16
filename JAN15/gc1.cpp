#include <stdio.h>
#include<iostream>

int gcd(int x, int y){
    int r;

    while ((r = x % y) != 0){
        x = y;
        y = r;
    }
    return(y);
}
int main(){
    
    int A[10],N,g;
    std::cin>>N;
    
    for(int i=0;i<N;i++)
            std::cin>>A[i];
    g=A[0];
    for (int i = 1; i < N; i++)
        g = gcd(g, A[i]);        
    std::cout<<g;    
    return 0;
}
