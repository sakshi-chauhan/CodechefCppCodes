#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:46777216")
#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility> 
using namespace std;
 
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define REP(i, N) FOR(i, 0, N)
#define RREP(i, N) RFOR(i, N, 0)
#define FILL(A,value) memset(A,value,sizeof(A))
 
#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define PB push_back
#define MP make_pair
#define Pi 3.14159265358979
 
typedef long long Int;
typedef long long LL;
typedef unsigned long long UInt;
typedef vector <int> VI;
typedef pair <int, int> PII;
 
const int INF = 1<<30;
const int MAX = 1<<17;
 
int main()
{
	// read the number of tests
	int t;
	cin >> t;
	FOR (tt,0,t)
	{
		VI A;
		// read n and k
		int n, k;
		cin >> n >> k;
		FOR (i,2,n+1)
			if (i % 2 == 0)
				A.PB(i);
		// find all even numbers in range 2..n
		// if n == 1 than add also 1
		if (n == 1)
			A.PB(1);
		// if it's not ok, output -1
		if (SZ(A) < k)
		{
			cout << -1 << endl;
			continue;
		}
		// otherwise output the result
		FOR (i,0,k)
			printf("%d%c", A[i], i+1 == k ? '\n' : ' ');
	}
	
 
	return 0;
} 