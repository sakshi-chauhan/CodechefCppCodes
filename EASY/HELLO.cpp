#include<iostream>

int main(){
    
    int T,U,N,M,C,pos;
    float D,R,min,cost;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>D>>U>>N;       
           min = D * U;
           pos = 0;
           
           for( int i = 1 ; i <= N ; i++ ){
                
                std::cin>>M>>R>>C;
                cost = (float)C/M + R*U;
                
                if( cost < min ){
                    
                    min = cost;
                    pos = i;
                        
                }
                     
           }
           std::cout<<pos<<'\n';
    }

    return 0;    
    
}
