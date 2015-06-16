#include<iostream>
#include<cstring>
#include<cassert>
#include<cstdio>

using namespace std;

#define s(n)                        scanf("%d",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)

using namespace std;


/*-------------------------Main code begins now ------------------------------*/
int testnum;

char M[305][305];
int R,C;


string spoon = "spoon";
void solve()
{
    forall(r, 0, R)
        forall(c, 0,C)
        {
            bool error1 = true, error2 = true;
            if(c + 5 <= C)
            {
                error1 = false;
                forall(k, 0, 5)
                    if(spoon[k] != M[r][c+k])
                        error1 = true;
            }
            
            if(r + 5 <= R)
            {
                error2 = false;
                forall(k, 0, 5)
                    if(spoon[k] != M[r+k][c])
                        error2 = true;
            }

            if(!error1 || !error2)
            {
                cout << "There is a spoon!" << endl;
                return;
            }
        }
    cout << "There is indeed no spoon!" << endl;
}

bool input()
{
    s(R); s(C);
    assert(1 <= R && R <= 100);
    assert(1 <= C && C <= 100);
    forall(i, 0, R)
    {
        ss(M[i]);
        assert(strlen(M[i]) == C);
        forall(j, 0, C)
        {
            M[i][j] = tolower(M[i][j]);
            assert( ('a' <= M[i][j] && M[i][j] <= 'z') || ('A' <= M[i][j] && M[i][j] <= 'Z'));
        }
    }
    return true;
}


int main()
{
    int T; s(T);
    assert(1 <= T && T <= 100);
    for(testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;
	  solve();
    }
}
