#include<iostream>

int main(){
    
    int m,n,k,d;
    int a[100009],b[100009];
    char q;  
    
    std::cin>>n>>m;
    
    for( int i=0; i<n; i++){
         std::cin>>a[i];
         b[i]=a[i];     
    }
    for( int i=0; i<m; i++){
         std::cin>>q; 
         std::cin>>d; 
         
         if( q == 'C' ){               
              for( int j=0; j<n; j++ ){
                    k=(j+d)%n;
                    b[j]=a[k];
              }
              
              for(int j=0;j<n;j++)
                 a[i]=b[i];
                 
         }   
         
                 
         else if( q == 'A' ){
              for( int j=0; j<n; j++ ){
                   k=(j+d)%n;
                   b[k]=a[j];        
              }
              
              for(int j=0;j<n;j++)
                 a[i]=b[i];
         }     
         
         
         else if( q == 'R' )
              std::cout<<b[d-1]<<'\n';     
    
    }     
         
    return 0;    
}
