#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>

#define MOD 1000000007
#define gc getchar_unlocked
#define pc putchar_unlocked

int N,M,L,R;
int * D = (int *) malloc ( (M+10) * sizeof(int) );
 
long long int fact( long long int N ){
     
     long long int f = 1;
     
     for(long long int i = 2 ; i <= N ; i++ ){
              
              f = ( (f % MOD) * (i % MOD) ) % MOD ;       
              
     }     
     
     return f;
} 
 
 
long long int C( long long int N , long long int M ){

     long long int res;     
     
     res = fact(N) % MOD;
     
     res = ( res % MOD / fact(M) % MOD ) % MOD;
     res = ( res % MOD / fact( N - M) % MOD ) % MOD;

     return res;
}

 
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

int main(){
    
    int T;
    long long int i,count,count1,temp;
    
    T = scan();
    
    while( T-- ){
           
           N = scan();
           M = scan();
           L = scan();
           R = scan();
  
           count = 0;
          
          
		   if( L == 1 ){
		   	
		   		count1 = 0;
		   		
		   		for( long long int a = 2 ; a <= M ; a++ ){
	           	
	           	     if( M/a - 1 ){
                          
                          temp = 0;
                          for( i = 1 ; i <= N ; i++ ){
                               
                               temp = (temp % MOD + (C(N,i) % MOD * (long long int)pow( (M/a -1) , (N-i) ) % MOD ) % MOD ) % MOD;     
                               
                          }
                             
                          D[a] = temp;
                             
                     }
	           	     
	           	     else{
                          
                          D [a] = 1;        
                             
                     }
	           	     
	           		//D[a] = ((long long int)pow((M/a),N) % MOD -(M/a) % MOD + 1) % MOD;
	           		//std::cout<<"D["<<a<<"] = "<<D[a]<<" ";
	           		
	           		count1 = (count1 % MOD + D[a] % MOD) % MOD;
	           		
	           }
	           
		   		 D[1] = ((long long int)pow(M,N) % MOD - count1 % MOD ) % MOD ;
		   		 //std::cout<<"D[1] = "<<D[1]<<" ";
		   		 
		   	}
		   		
           else{
           
	           for( long long int a = L ; a <= R ; a++ ){
	           	
	           		//D[a] = ((long long int)pow((M/a),N) % MOD - (M/a) % MOD + 1 ) % MOD;
	           		//std::cout<<"D["<<a<<"] = "<<D[a]<<" ";
	           		
	           		if( M/a - 1 ){
                          
                          temp = 0;
                          for( i = 1 ; i <= N ; i++ ){
                               
                               temp = (temp % MOD + (C(N,i) % MOD * (long long int)pow( (M/a -1) , (N-i) ) % MOD ) % MOD ) % MOD;     
                               
                          }
                             
                          D[a] = temp;
                             
                     }
	           	     
	           	     else{
                          
                          D [a] = 1;        
                             
                     }
	           		
	           }
   
           } 
           
            for( long long int a = L ; a <= R ; a++ ){
            	
            		count = (count % MOD + D[a] % MOD ) % MOD;
            }
           
           std::cout<<count<<'\n';
    }
    
    return 0;    
    
}
