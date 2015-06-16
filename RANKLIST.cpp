#include<iostream>

using namespace std;

int main(){
    
    //int T,N;
    long long int T,N,S,k,i;
    
    cin>>T;
    
    while( T-- ){
           
          cin>>N>>S;
          
          if( S == (N*(N+1)/2) ){
          
              cout<<"0\n";
              continue;
              
          }
          
          if( S == N ){
              
              cout<<N-1<<"\n";    
              break;
              
          }
          
          k = N;       
          
          for( i = N-1 ; i > 0 ; i-- ){
               
               if( S <= k + i ){
                   cout<<i<<"\n";
                   break;
               }     
               
               k = k + i;
               
          }        
           
           
    }    
    
    return 0;    
}
