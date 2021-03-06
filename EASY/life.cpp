#include <cstdio>
#include <cstring>

int N;
long long rot(long long x, int amt){
	return ((x<<amt)|(x>>(N-amt)))&((1ll<<N)-1);
}

int main(){
	char in[51];
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s", in);
		N=strlen(in);
		long long cur=0, orig=0;
		for(int i=0; i<N; i++)
			cur|=(long long)(in[i]-'0')<<i;
		for(int i=0; i<N; i++)
			if((i%3)!=(2*N%3))
				orig^=rot(cur, i);
		if((N%3)==0){
			if(orig==0)
				puts("Multiple solutions");
			else
				puts("No solution");
		}else{
			for(int i=0; i<N; i++)
				putchar('0'+((orig>>i)&1));
			putchar('\n');
		}
	}
	return 0;
}
