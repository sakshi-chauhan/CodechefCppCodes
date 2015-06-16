#include<iostream>

int min( int a , int b , int c ){
    
    int m = a;
    
    if( m > b )
        m = b;
    if( m > c )
        m = c;
    
    return m;
        
}

int main(){
    
    int T,m,n;
    bool mat[105][105];
    int s[105][105];
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>m>>n;       
           
           for( int i = 0 ; i < m ; i++ )
                for( int j = 0 ; j < n ; j++ )
                     std::cin>>mat[i][j];
           
           for( int i = 0 ; i < m ; i++ )
                s[i][0] = mat[i][0];
           
           for( int i = 1 ; i < n ; i++ )
                s[0][i] = mat[0][i];
           
           int max = 0;
           
           for( int i = 1 ; i < m ; i++ ){
                
                for( int j = 1 ; j < n ; j++ ){
                     
                     if( mat[i][j] == 1 ){
                         
                         s[i][j] = min( s[i-1][j-1] , s[i-1][j] , s[i][j-1] ) + 1;
                         if( s[i][j] > max )
                             max = s[i][j];
                             
                     }     
                     else
                         s[i][j] = 0;
                }     
                
           }                   
           
           std::cout<<max<<"\n";                     
    }
    
    return 0;
        
}
