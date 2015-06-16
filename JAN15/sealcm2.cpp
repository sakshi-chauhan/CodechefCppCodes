#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>

#define MOD 1000000007

int gcd( int n1 , int n2 ){
	
	//std::cout<<n1<<"  "<<n2<<"\n";
	while(n1 != n2){
		
		if(n1 > n2-1){
			n1 = n1-n2;
			//std::cout<<n1<<"n1";
		}
		
		else{
			n2 = n2-n1;
			//std::cout<<n2<<"n2";
		}
			
	}	
	
	return n1;
}

int main(){
	
	int T,M,L,R,lcm;
	long long int N,count;
	
	std::cin>>T;
	
	while( T-- ){
	
		std::cin>>N>>M>>L>>R;
		int* arr = (int*)malloc(N*sizeof(int));
		int* arr1 = (int*)malloc(N*sizeof(int));
		int l[3000];
		count = 0;
	
		for(int j = 0 ; j < N ; j++ )
	               arr[j] = 1;
	   
		for(int j = 0 ; j < 3000 ; j++ )
				l[j] = 0;
	
	    l[1]++;        
	            
		for(int i = 1 ; i <= pow(M,N)-1 ; i++ ){
	                
	                
	                if( i % M == 0 ){  
	                	
		                for(int k = 1 ; k <= (log(i)/log(M))+1 ; k++ ){
		                            
		                    if( i % (int)(pow(M,k)) == 0 )
		                                
		                        arr[N-k-1] = arr[N-k-1] % M + 1; 
		                        
		                    else
		                    	
		                    	break;
		
		                }
		                
	                }
	                       
	                arr[N-1] = arr[N-1] % M + 1;
	                
	                
					lcm = arr[0];
		
					for(int j = 1 ; j < N ; j++ )
						lcm = (lcm*arr[j])/gcd(lcm,arr[j]);
					
					/*for(int j = L ; j <= R ; j++ ){
						
						if( lcm % j == 0 )
							l[j]++;
						
					}*/
				
	    }
	    
	    //for(int j = L ; j <= R ; j++ )
	    	//count = (count%MOD + l[j]%MOD)%MOD;
	    
	    std::cout<<count<<"\n";
	}
}
