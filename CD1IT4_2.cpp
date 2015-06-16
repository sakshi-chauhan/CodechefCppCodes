#include<vector>
#include<iostream>
#include<algorithm>
#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
#define M 1000000007

using namespace std; 

long long int scan(){
	long long int n=0;
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

long long int print(long long int n){
	long long int i=0;
	char ch[6]={-1};
	while(n>0){
		ch[i++]='0'+n%10;
		n=n/10;
	}
	while(i-->0){
		pc(ch[i]);
	}
	pc('\n');
}
 
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD){
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(int n, int MOD)
{
    return pow(n,MOD-2,MOD);
}
 
long long C(int n, int r, int MOD){
    vector<long long> f(n + 1,1);
    for (int i=2; i<=n;i++)
        f[i]= (f[i-1]*i) % MOD;
    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}

int main(){
    
    int m,n,a,b;
    long long int p,i,j;
    //long long int dp[1002][1002];
    
    m = scan();
    n = scan();
    p = scan();
    
    //dp[m][n+1] = 1;
    
    for( i = 0 ; i < p ; i++ ){
         cin>>a>>b;
         //dp[a][b] = -1;     
    }
    
    
    /*for ( i = m; i >= 1; i-- ){
        for ( j = n; j >= 1; j--){
            
            if( dp[i][j] != -1 ){
                
                if( dp[i+1][j] != -1 && dp[i][j+1] != -1 )
                    dp[i][j] = ( dp[i+1][j] % MOD + dp[i][j+1] % MOD )%MOD;
                else if( dp[i][j+1] != -1 )
                    dp[i][j] = dp[i][j+1]%MOD;
                else if( dp[i+1][j] != -1 )
                    dp[i][j] = dp[i+1][j]%MOD;         
            } 
        }
    }
    cout<<dp[1][1]<<"\n";*/
    
    cout<<C(m+n-2,m-1,M)<<"\n";
    
    return 0;    
}
 
