#include<iostream>
#define MOD 1000000007
 
int mypow(int base,long long int exp){
	int ans=1;
	while(exp){
		if(exp%2) ans=(long long)ans*base%MOD;
		base=(long long)base*base%MOD;
		exp/=2;
	}
	if(ans<0) ans+=MOD;
	return ans;
}
 
int main(){
    
    int T;
    long long int N,M,L,R;
    long long int *A;
    long long int *B;
    
    std::cin>>T;
    
    while(T--){
               
         std::cin>>N>>M>>L>>R;
         
         A = new long long int[M+5];
         B = new long long int[M+5];
         
         int answer = 0;
         int last = -1;
         int nf,b;
         int power;
         int fact[1002];
         //fact[0]=1;
         for( int d = 1; d <= M; d++ ){
            
            nf = 0;
            //b = 0;
            fact[0]=1;
            //std::cout<<fact[0];
            b = 1;
            //std::cout<<"for d = "<<d<<"\n";
            for(int a = 2 ; a <= d/2 ; a++ ){
            	//std::cout<<fact[0]<<" 0 \n";
            	if( d % a == 0 ){
					
					
					fact[b]=a;
					
					//std::cout<<"fact"<<b<<" = "<<fact[b]<<"  ";
					nf++;
					b++;
					
            	}
            }
            
  
            if( d == 1 )
            	nf = 1;
            else
            	nf += 2;
            
            fact[nf-1] = d;
            
            //std::cout<<"factors of"<<d<<"\n";
            //std::cout<<fact[0]<<" "<<fact[nf-1]<<"\n";
            //for(int a = 0 ; a <nf ; a++)
            	//std::cout<<fact[a]<<" ";
            //std::cout<<"\n";		
            
            if(nf != last)
            {
                power = mypow(nf, N);
                last = nf;
            }
            
            //std::cout<<nf<<"factors of"<<d<<"\n";
            A[d] = power;
            
            //std::cout<<"A"<<d<<" = "<<A[d]<<"\n";    
            int S = 0;
            int k;// = fact[0];
            
            for(int a = 0 ; a < nf-1 ; a++ )
            {
            	k = fact[a];
            	//std::cout<<k<<"k\n";
            
                S += B[k];
                if(S >= MOD) S %= MOD;
                //k += d;
            }
            
            B[d] = A[d] - S;
            //std::cout<<"B"<<d<<" = "<<B[d]<<"\n";
            if(B[d] < 0) B[d] += MOD;
            if(B[d] >= MOD) B[d] %= MOD;
            if(d >= L && d <= R) 
            {
                answer += B[d];
                if(answer >= MOD) answer %= MOD;
            }
        }
        
        std::cout << answer << '\n';                 
    }
    
                      
    return 0;
       
}
 
