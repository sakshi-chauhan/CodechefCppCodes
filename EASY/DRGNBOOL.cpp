#include<iostream>
#include<cstring>
int main(){
    int t,n,m,ci,li,power;
    int intpower[110],floatpower[110];
        
    std::cin>>t;
    
    while(t--){
                std::cin>>n>>m;
                
                power=0;
                memset(intpower,0,sizeof(intpower));
                memset(floatpower,0,sizeof(floatpower));
                
                for( int i=0; i<n; i++ ){
                     std::cin>>ci;
                     std::cin>>li;
                     intpower[li]+=ci;
                }
                
                for( int i=0; i<m; i++ ){
                     std::cin>>ci;
                     std::cin>>li;    
                     floatpower[li]+=ci; 
                }          
                
                for( int i=1; i<=100; i++ ){
                          if(intpower[i] < floatpower[i])
                              power+=(floatpower[i] - intpower[i]);           
                }
                
                std::cout<<power<<'\n';
    }
    return 0;    
}
