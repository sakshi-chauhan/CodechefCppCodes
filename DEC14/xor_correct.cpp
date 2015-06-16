#include <bits/stdc++.h>
using namespace std;
 
#define tr(c,i) for(auto i=(c).begin(); i != (c).end(); i++)
#define rep(i,n) for(int i=0;i<(n);i++)
#define forup(i,a,b) for(int i=(a);i<=(b);i++)
#define tcsolve() int tcs; cin >> tcs; forup(tc, 1, tcs) solve();
 
void solve() {
	int n, k, t, ans;
	cin >> n >> k;
	set<int> s, w;
	rep (i, n) {
		cin >> t;
		s.insert(t);
	}
	ans = k;
	w.insert(k);
	tr(s, i) {
		tr(w, j) {
			int x = *i^*j;
			ans = max(ans, x);
			w.insert(x);
		}
	}
	cout << ans << endl;
}
 
int main () {
	std::ios::sync_with_stdio(false);
	tcsolve();
	return 0;
}
