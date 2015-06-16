#include<iostream>
 
int main(){
    
    int m,n,d;
    int a[100009];
    char q;  
    
    std::cin>>n>>m;
    
    for( int i=0; i<n; i++){
         std::cin>>a[i];
    }
    for( int i=0; i<m; i++){
         std::cin>>q; 
         std::cin>>d; 
         
         if( q == 'C' ){               
                   // leftrotate(a,d,n);
                   int k,j,temp;   
                   for (k = 0; k < d; k++){
    
                       temp = a[0];
                       for (j = 0; j < n-1; j++)
                           a[j] = a[j+1];
    
                       a[j] = temp;
                       }    
         }   
         
         else if( q == 'A' ){
              //rightrotate(a,d,n);
              int k,j,temp;   
              for (k = 0; k < d; k++){
                  temp = a[n-1];
    
                  for (j = n-1; j > 0; j--)
                      a[j] = a[j-1];
    
                      a[j] = temp;
                      }       
         }     
         
         else if( q == 'R' )
              std::cout<<a[d-1]<<'\n';     
    
    }     
         
    return 0;    
}

 
