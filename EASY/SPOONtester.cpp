#include <cstdio>
#include <cctype>

const int maxN = 100;
char s[maxN][maxN+1];

int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		int n,m,i,j;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
			for(j=0;j<m;j++)
				s[i][j]=tolower(s[i][j]);
		}
		bool yes=false;
		for(i=0;i<=n-5 && !yes;i++)
			for(j=0;j<m && !yes;j++)
				if(s[i][j]=='s' && s[i+1][j]=='p' && s[i+2][j]=='o' && s[i+3][j]=='o' && s[i+4][j]=='n')
					yes=true;
		for(i=0;i<n && !yes;i++)
			for(j=0;j<=m-5 && !yes;j++)
				if(s[i][j]=='s' && s[i][j+1]=='p' && s[i][j+2]=='o' && s[i][j+3]=='o' && s[i][j+4]=='n')
					yes=true;
		puts(yes?"There is a spoon!":"There is indeed no spoon!");
	}
	return 0;
}
