#include<iostream>
#define MOD 1000000007

int mypow(int base,int exp){
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
         int power;
         for(int d = M; d >= 1; --d){
                 
            int div = M / d;
            if(div != last)
            {
                power = mypow(div, N);
                last = div;
            }
            
            A[d] = power;
            int S = 0;
            int k = 2 * d;
            
            while(k <= M)
            {
                S += B[k];
                if(S >= MOD) S %= MOD;
                k += d;
            }
            
            B[d] = A[d] - S;
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
