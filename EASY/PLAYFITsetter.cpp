
/* Author : Vamsi Kavala */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)	
#define mod 1000000007
#define MAXN 1000010

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef long long int LL;

int main(){

	int t;
	int n;
	scanf("%d",&t);
	while(scanf("%d",&n)!=EOF)
	{
		int ans=-1,maxm=-1,minm=mod,x;

		REP(i,n)
		{
			scanf("%d",&x);
			ans=max(ans,x-minm);
			minm=min(minm,x);
		}
		if(ans>0)
			printf("%d\n",ans);
		else
			printf("UNFIT\n");
		

	}
	return 0;
}
