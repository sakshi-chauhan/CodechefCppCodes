#include<iostream>
#include<algorithm>

int max(int a , int b){
    
    return (a>b)?a:b;    
    
}

int main(){
    
    int t,n,k,res,ans;
    int A[1005];
    int dp[1005][1025];
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n>>k;
           for( int i = 0 ; i < n ; i++ )
                std::cin>>A[i];
           
           dp[0][0] = 0;
           
           for( int i = 1 ; i < n ; i++ ){
                
                for( int j = 0 ; j < 1024 ; j++ ){
                     
                     dp[i][j] = dp[i-1][j]|dp[i-1][j^A[i]];     
                     
                }      
                
           }  
           ans = k;
           for(int j = 0 ; j < 1024 ; j++ ){
                   
                   res = dp[n][j] * (j^k);
                   ans = max(ans,res);        
                   
           }     
           
           std::cout<<ans<<'\n';
    }
    
    
    return 0;
        
}
