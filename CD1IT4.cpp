#include<iostream>
#include<algorithm>
#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
#define MOD 1000000007

long long int dp[1002][1002] = {0};
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
	//pc('\n');
}

int main(){
    
    int m,n,a,b;
    long long int p,i,j;
    //long long int dp[1002][1002];
    
    m = scan();
    n = scan();
    p = scan();
    
    dp[m][n+1] = 1;
    
    for( i = 0 ; i < p ; i++ ){
         //cin>>a>>b;
         a = scan();
         b = scan();
         dp[a][b] = -1;     
    }
    
    
    for ( i = m; i >= 1; i-- ){
        for ( j = n; j >= 1; j--){
            
            if( dp[i][j] != -1 ){
                
                if( dp[i+1][j] != -1 && dp[i][j+1] != -1 )
                    dp[i][j] = ( dp[i+1][j] % MOD + dp[i][j+1] % MOD )%MOD;
                else if( dp[i][j+1] != -1 )
                    dp[i][j] = dp[i][j+1]%MOD;
                else if( dp[i+1][j] != -1 )
                    dp[i][j] = dp[i+1][j]%MOD;         
            } 
            if( dp[i][j] < 0 )
                dp[i][j] = 0 ;
        }
    }
    cout<<dp[1][1];
    //print(dp[1][1]);
    return 0;    
}
