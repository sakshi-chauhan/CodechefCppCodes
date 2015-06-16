#include<iostream>
#include<climits>

int main(){
    
    int t,n,m,max,i,j,k,flag;
    int a[105];
    
    std::cin>>t;
    
    while ( t-- ){
          flag=0;
          std::cin>>n>>m;
          
          for( i=0 ; i<n ; i++ )
                   std::cin>>a[i];
          
          for( i=1 ; i<n ; i++ ){
                  if( a[i]!=a[0] ){
                      flag=1;
                      break;    
                  }  
          }
          
          if( m==0 ){
              if( flag==0 )
                  std::cout<<"Yes\n";
              else
                  std::cout<<"No\n";        
          }
          
          else{
               max=a[0];
               
               for( i=1 ; i<n ; i++ ){
                    if( a[i] > max )
                        max = a[i];     
               }     
               
               for( i=0 ; i<n ; i++ ){
                    if( a[i] != max)
                        m -= ( max - a[i] );     
               }
               
               if( i==n && (m==0 || m%n == 0))
                   std::cout<<"Yes\n";
               else
                   std::cout<<"No\n";    
          }
    }
          
    return 0;    
    
}
