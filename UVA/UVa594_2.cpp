#include<iostream>

int rev( int n ){
    
    int b0,b1,b2,b3;
    
    b0 = ( n & 0x000000FF )>>0;    
    b1 = ( n & 0x0000FF00 )>>8;
    b2 = ( n & 0x00FF0000 )>>16;
    b3 = ( n & 0xFF000000 )>>24;
    
    return (b0<<24) | (b1<<16) | (b2<<8) | (b3 <<0);
}

int main(){
    
    int n;

    while( std::cin>>n ){
           
           std::cout<<n<<" converts to "<<rev(n)<<'\n';       
           
    }    
    return 0;    
    
}
