#include<iostream>
#define MAX 4000001

int t[MAX];
int a[1000001];

int main(){
    
    std::ios::sync_with_stdio(false);
    
    int T,p,in,done,i,start,prev;
    
    t[0] = 0;
    for( i=1 ; i<MAX ; i++ ){
         
         if( i%2 )
             t[i] = 1 - t[i/2];
         else    
             t[i] = t[i/2]; 
         
    }
    
    //std::cin>>T;
    scanf("%d",&T);
    
    while( T-- ){
           
           start = prev = 0;
           //std::cin>>p;
           scanf("%d",&p);
           
           for( i=0 ; i<p ; i++ ){
                  
                  //std::cin>>a[i];
                  scanf("%d",a[i]);
                  
                  if( prev == -1 ){
                      //std::cout<<prev<<" ";
                      printf("%d ",prev);
                      continue;
                  }
                  if( a[i] == t[start] ){
                      //std::cout<<prev<<" ";
                      printf("%d ",prev);
                      start++;
                      continue;
                  }       
                  
                  in = done = 0;
                  
                  while( start <= MAX ){
                      if( in > i ){
                          
                          prev = start - i - 1;    
                          done = 1;
                          break;
                          
                      }
                      
                      if( a[in] == t[start] )
                          in++;
                          
                      else{
                           start -= in;     
                           in = 0;
                      }
                      
                      start++;
                  }
                  
                  if( !done )
                      prev = -1;
                  
                  //std::cout<<prev<<" ";    
                  printf("%d ",prev);
           }
           //std::cout<<'\n';
           printf("\n");       
    }
        
    return 0;
        
}
