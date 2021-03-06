#include <iostream>
#include <cassert>

using namespace std;

#define FOR(i,a,n) for(int i=(a);i<(n);i++)
#define CHECKRANGE(x,a,b) assert(a<=x && b>=x)

int gcd(int a, int b) { return b?gcd(b,a%b):a; }

int main() {
    int T;
    cin >> T;
    CHECKRANGE(T,1,100);
    while(T--) {
        int N;
        cin >> N;
        CHECKRANGE(N,1,1000);
        int res = 0;
        FOR(i,0,N) {
            int num;
            cin >> num;
            CHECKRANGE(num,1,1000000000);
            res = gcd(num,res);
        }
        cout << res << endl;
    }
    return 0;
}

