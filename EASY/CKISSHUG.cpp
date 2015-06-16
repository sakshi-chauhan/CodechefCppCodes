#include<iostream>

#define MOD 1000000007
#define square(x) ( x*x ) % MOD
#define ceiling(n) (( n%2 == 0 ) ? ((n+1)/2 + 1 ) : ((n+1)/2)  )


long long exp_by_sq(int x, int n){
 
    if( n < 0 )
        return exp_by_sq( 1/x , -n );   
    
    else if( n == 0 )
         return 1;
        
    else if( n == 1 )
         return x;
         
    else if( n%2 == 0 )           
         return (exp_by_sq( square(x) , n/2 ));
         
    else if( n%2 )
         return (x % MOD * exp_by_sq( square(x) , (n-1)/2 ) ) % MOD;      
}

int main(){
    
    int t;
    long long int n,res;
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n;
          
           res = (exp_by_sq(2,ceiling(n)) % MOD + exp_by_sq(2,(n+1)/2) % MOD - 2) % MOD; 
                 
           std::cout<<res<<'\n';      
    }
    
    return 0;
        
}
