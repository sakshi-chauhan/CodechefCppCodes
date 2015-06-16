#include<iostream>
#include<bitset>

int main(){
    
    long n,temp;
    
    
    while( std::cin>>n ){
           
                  std::bitset<32> in(n);
                  
                  for( int i = 0 ; i < 8 ; i++ ){
                       
                        temp = in[i];    
                        in[i] = in [24+i];
                        in[24+i] = temp;
                  }
                  
                  for( int i = 8 ; i < 16 ; i++ ){
                       
                        temp = in[i];    
                        in[i] = in [8+i];
                        in[8+i] = temp;
                  }
                  
                  std::cout<<n<<" converts to "<<in.to_ulong()<<'\n';
                  //std::cout<<in;
    }
    
    return 0;
        
}
