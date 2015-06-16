#include<iostream>

#define square(x) x*x

int exp_by_sq(int x, int n){
 
    if( n < 0 )
        return exp_by_sq( 1/x , -n );   
    
    else if( n == 0 )
         return 1;
        
    else if( n == 1 )
         return x;
         
    else if( n%2 == 0 )           
         return exp_by_sq( square(x) , n/2 );
         
    else if( n%2 )
         return x * exp_by_sq( square(x) , (n-1)/2 );      
}

int main(){
    
    int x,n;
    
    std::cin>>x>>n;
    
    std::cout<<exp_by_sq(x,n);
    
    return 0;
        
}
