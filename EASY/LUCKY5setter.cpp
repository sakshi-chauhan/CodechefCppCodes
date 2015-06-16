#include <iostream>  
#include <sstream>  
#include <cstdio>  
#include <cstdlib>  
#include <cmath>  
#include <memory>  
#include <cctype>  
#include <string>  
#include <vector>  
#include <list>  
#include <queue>  
#include <deque>  
#include <stack>  
#include <map>  
#include <set>  
#include <algorithm>  
using namespace std; 
  
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i)) 
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i)) 
#define CLEAR(a) memset((a),0,sizeof(a)) 
#define INF 1000000000 
#define PB push_back 
#define ALL(c) (c).begin(), (c).end() 
#define pi 2*acos(0.0) 
#define SQR(a) (a)*(a) 
#define MP make_pair 
  
typedef long long Int; 
 
char s[100000];
int t;
 
int main()
{
		cin >> t;
		FOR (tt,0,t)
		{
				scanf("%s", s);
				int c = 0;
				FOR (i,0,strlen(s))
						if (s[i] != '4' && s[i] != '7')
								c++;
				cout << c << endl;
		}
 
		
		return 0;
} 
 