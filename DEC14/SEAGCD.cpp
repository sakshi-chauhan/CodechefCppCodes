//Brute Force Method

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>

#define MOD 1000000007
#define gc getchar_unlocked
#define pc putchar_unlocked

int N,M,L,R;
int * arr = (int *) malloc ( (N+10) * sizeof(int) );
int * D = (int *) malloc ( (M+10) * sizeof(int) );
 
 
int scan(){
	int n=0;
	char ch;
	
	ch=gc();
	
	while(ch<'0' || ch >'9')
		ch=gc();
	
	while(ch>='0' && ch<='9'){
		n=n*10+ch-'0';
		ch=gc();
	}
	
		return n;
}

int gcd_array( int * arr , int N ){

     bool flag;
     int i,j,min = arr[0];     
     
     for(  i = 0 ; i < N ; i ++ ){
           
           if( arr[i] < min )
               min = arr[i];      
           
     }
     
     for( i = min ; i  > 0 ; i-- ){
          
          flag = 0;
          
          for( j = 0 ; j < N ; j++ ){
               
               if( arr[j] % i != 0 ){
                   
                   flag = 1;
                   break;    
                   
               }     
               
          }     
          
          if( !flag )
              return i;
          
     }
     
}


int main(){
    
    int T;
    int i,k,count;
    
    T = scan();
    
    while( T-- ){
           
           N = scan();
           M = scan();
           L = scan();
           R = scan();
  
           count = 0;
           
           arr[0] = 2;
           //arr[1] = 2;
           
           for(int a = 1 ; a < N ; a++ ){
           		arr[a] = L;
           }		
           
           D[1] = ((int)pow(M,N-1) % MOD);//  + ((int)pow(M,N-2) % MOD)) % MOD ;
           
           for(int a = 2 ; a <= M ; a++ ){
           		D[a] = 0;
           }

           D[gcd_array(arr,N)] = ( D[gcd_array(arr,N)] % MOD + 1 ) % MOD;
                 
           for( i = 1 ; i <= pow(M,N)-pow(M,N-1)-1 ; i++ ){
                
                
                if( i % M == 0 ){  
                	
	                for( k = 1 ; k <= (log(i)/log(M))+1 ; k++ ){
	                            
	                    if( i % (int)(pow(M,k)) == 0 )
	                                
	                        arr[N-k-1] = arr[N-k-1] % M + 1; 
	                        
	                    else
	                    	
	                    	break;
	
	                }
	                
                }
                       
                arr[N-1] = arr[N-1] % M + 1;
                
               
                D[gcd_array(arr,N)] = ( D[gcd_array(arr,N)] % MOD + 1 ) % MOD;       
   
           }
                   
           for(int j = L ; j <= R ; j++ )
           		count = ( count % MOD + D[j] % MOD ) % MOD;
           		
           std::cout<<(count % MOD)<<'\n';  
          
           
    }
    
    return 0;    
    
}
