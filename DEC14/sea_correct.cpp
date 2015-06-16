#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
 
using namespace std;
 
#define mod 1000000007
 
typedef long long LL;
typedef vector<int> vi; 
 
vi dp(10000010);
 
int power(int base,int exp){
	int ans=1;
	while(exp){
		if(exp%2) ans=(LL)ans*base%mod;
		base=(LL)base*base%mod;
		exp/=2;
	}
	if(ans<0) ans+=mod;
	return ans;
}
 
int main(){
	cin.sync_with_stdio(0);
	cin.tie();
	int t;
	cin>>t; 
	while(t--){
		int n,m,l,r;
		cin>>n>>m>>l>>r;
		if(l==1 && r==m){
			int ans=power(m,n);
			cout<<ans<<"\n";
			continue;
		}
		dp[m]=1;
		for(int i=m-1;i>=l;i--){
			if(m/i==m/(i+1)){
				dp[i]=dp[i+1];
				continue;
			} 
			dp[i]=power(m/i,n);
			for(int j=i+i;j<=m;j+=i)
				dp[i]=(dp[i]-dp[j])%mod;
			if(dp[i]<0) dp[i]+=mod;	
		}
		int sum=0;
		for(int i=l;i<=r;i++) sum=(sum+dp[i])%mod;
		cout<<sum<<"\n";
	}
	return 0;
}
