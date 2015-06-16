#include<iostream>
#include<cstring>

int main(){
    
    int t,n,i,count;
    std::string str;
    bool explode[1010];
    
    std::cin>>t;
    
    while( t-- ){
           std::cin>>n;       
           std::cin>>str;
           count = 0;
           memset(explode,0,1010);
           
           for( i=0 ; i<n ; i++ ){
                if( str[i] == '1' ){
                    explode[i] = 1;
                    if( i>0 )
                        explode[i-1] = 1;
                    if( i<n-1 )
                        explode[i+1] = 1;    
                }     
           }
           
           for( i=0 ; i<n ; i++ ){
                if( explode[i] == 0 )
                    count++;
           }
           std::cout<<count<<'\n';
    }
    
    return 0;
        
}
