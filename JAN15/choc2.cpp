#include<iostream>
#include<cstring>

#define SET(a,b) (memset(a,b,sizeof(a)))

#define REP(i,a,b) \
    for(int i = int(a);i <= int(b);i++)

 
 
 
int A[10005],B[10005];
using namespace std; 
int main(){
    int t,n,u,i,j,k,m,p;
    cin>>t;
    while(t--){
        cin>>n>>u;
        SET(A, 0);
        while(u--){
            cin>>i>>j>>k;
            i++,j++;//1th indexed now
            A[i] += k;
            A[j+1] -= k;
        }
        SET(B, 0);
        REP(i, 1, n){
            B[i] = A[i] + B[i-1];
        }
        cin>>m;
        while(m--){
            cin>>p;
            cout<<B[p+1]<<endl;
        }
    }
    return 0;
} 
