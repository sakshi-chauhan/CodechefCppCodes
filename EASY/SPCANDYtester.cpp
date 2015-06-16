#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)

typedef pair<int,int> PII;
typedef pair<double, double> PDD;

#define IN(A, B, C) assert( B <= A && A <= C)

//typedef int LL;
typedef __int64 LL;

int main()
{
	LL lim, N, K, p, q;
	int i, T;

	lim = 1;
	for(i = 1; i <= 33; i++)
		lim *= 2;
	
	scanf("%d", &T);
	IN(T, 0, 100);

	while(T--)
	{
		scanf("%I64d %I64d", &N, &K);

		IN(N, 0, lim - 1);
		IN(K, 0, lim - 1);

		if(K == 0) p = 0, q = N;
		else p = N/K, q = N%K;

		printf("%I64d %I64d\n", p, q);
	}

	return 0;
}
