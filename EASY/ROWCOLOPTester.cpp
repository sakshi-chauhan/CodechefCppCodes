#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<string>
#include<utility>
#include<iostream>
#include<cassert>
using namespace std;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long

int main(){
  int N, Q, L, X;
  string in;
  static int R[1000000], C[1000000];
  int i, rmax, cmax;

  assert( cin >> N >> Q );
  assert( 1<=N && N<=314159 );
  assert( 1<=Q && Q<=314159 );
  while(Q--){
    assert( cin >> in >> L >> X );
    assert( 1<=L && L<=N );
    assert( 1<=X && X<=3141 );
    L--;
    if(in=="RowAdd"){
      R[L] += X;
    } else if(in=="ColAdd"){
      C[L] += X;
    } else {
      assert(0);
    }
  }

  rmax = cmax = 0;
  rep(i,N) rmax = max(rmax, R[i]); /* finding the max row */
  rep(i,N) cmax = max(cmax, C[i]); /* finding the max column */

  cout << rmax + cmax << endl;

  return 0;
}
