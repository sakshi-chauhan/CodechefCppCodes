#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 50;

bool ok(int n, bool *x, bool *y) {
  for (int i = 2; i < n; ++i) y[i] = y[i-2]^y[i-1]^x[i-1];
  if (y[n-2]^y[n-1]^y[0]^x[n-1]) return false;
  if (y[n-1]^y[0]^y[1]^x[0]) return false;
  return true;
}

int main() {
  int t;
  char str[MAXN+1];
  bool x[MAXN], y[MAXN];
  cin >> t;
  while (t--) {
    cin >> str;
    int n = strlen(str);
    for (int i = 0; i < n; ++i) x[i] = (str[i] == '1');
    bool a,b;
    int cnt = 0;
    for (int i = 0; i < 4; ++i) {
      y[0] = i>>1;
      y[1] = i&1;
      if (ok(n,x,y)) {
	a = y[0]; 
	b = y[1];
	++cnt;
      }
    }
    if (cnt == 0) cout << "No solution" << endl;
    else if (cnt > 1) cout << "Multiple solutions" << endl;
    else {
      y[0] = a;
      y[1] = b;
      ok(n,x,y);
      for (int i = 0; i < n; ++i) cout << (y[i]?1:0);
      cout << endl;
    }
  }    
}
