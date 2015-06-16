#include<iostream>
#include<cstdlib>
#include<algorithm>
#define rep(i,N) for(i = 0 ; i < N ; i++)

/*int gcd( int *A , int N ,int L, int R){
    
    int i,min,gc=1,gcd=2;
    bool flag;
    
    if( L == 1 )
        min = A[R];
    else
        min = A[0];    
    
    while( gcd <= min ){
           flag=0;
           rep( i,N ){
                if(i == L-1)
                     i = R;
                if( A[i] % gcd ){
                    flag=1;
                    break;   
                }
           }
           if(!flag)
                    gc = gcd;
           gcd++;
               
    }
    
    return gc;
}*/
int gcd(int x, int y){
    int r;

    while ((r = x % y) != 0){
        x = y;
        y = r;
    }
    return(y);
}

int main(){
    
    int T,N,Q,L,R,i,j,g;
    int* A;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N>>Q;
           A = (int *)malloc((N)*sizeof(int));  
           
           rep(j,N)
                   std::cin>>A[j];   
           
           //std::sort(A,A+N);    
                     
           rep(j,Q){
                   std::cin>>L>>R;
                   
                   //std::cout<<gcd(A,N,L,R)<<'\n'; 
                   if( L == 1 )
                       g = A[R];
                   else
                       g = A[0];  
                   
                   for( i = 1; i < L-1 ; i++ )
                        g = gcd(g,A[i]);
                   
                   for( i = R ; i < N ; i++ )
                        g = gcd(g,A[i]);     
                   
                   std::cout<<g<<'\n';     
           }
    }
    
    return 0;    
    
}
