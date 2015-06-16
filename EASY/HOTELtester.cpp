#include <iostream>
 
using namespace std;
 
int ar[100];
int dp[100];
 
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> ar[i];
    for (int i = 0; i < n; i++) cin >> dp[i];
    int res = 0;
    for (int t = 0; t <= 1000; t++) {
        int cur = 0;
        for (int i = 0; i < n; i++) cur += ar[i] <= t && t < dp[i];
        res = max(res, cur);
    }
    cout << res << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}