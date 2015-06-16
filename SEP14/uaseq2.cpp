#include<iostream>
#include<climits>

int main(){
    
    int n,k,res,diff,pos,min;
    int a[100005];
    min=INT_MAX;
    
    std::cin>>n>>k;
    
    for( int i=0; i<n; i++ ){
         std::cin>>a[i];     
    }
    
    for( int i=1; i<n-1; i++ ){
    
         res = a[i] - (i*(a[i+1]-a[i]));
         
         if( res < min ){
             min = res;
             diff = a[i+1]-a[i]; 
             pos = i;   
         }
         
         else if( res == min ){
             if( diff > a[i+1] - a[i] ){
                 diff = a[i+1] - a[i];
                 min = k;
                 pos = i;    
             }      
              
         }
         
    }
    
    for( int i = pos-1; i>=0; i-- ){
         a[i] = a[i+1] - diff;     
    }
    
    for( int i = pos+2; i<n; i++ ){
         a[i] = a[i-1] + diff;     
    } 
    
    for( int i=0; i<n; i++)
         std::cout<<a[i]<<" ";
    
    return 0;    
}
