#include<iostream>

int powersoftwo[31]= {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,
2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144,
524288, 1048576, 2097152, 4194304, 8388608, 16777216,
33554432, 67108864, 134217728, 268435456, 536870912};

int main(){
    int t,n;
    std::cin>>t;
    while(t--){
               std::cin>>n;
                    for(int i=0;i<30;i++){
                          if(n & (n-1) == 0){
                              std::cout<<n<<'\n';  
                              break;
                          }
                          else if(n > powersoftwo[i] && n < powersoftwo[i+1]){            
                                   std::cout<<powersoftwo[i]<<'\n';   
                                   break;
                          }
                          /*else if(n == powersoftwo[i]){
                              std::cout<<n<<'\n';
                              break;
                          } */   
                          else if(n > 536870912){
                              std::cout<<536870912<<'\n';                         
                              break;
                          }
                    }                   
    }
    return 0;    
}
