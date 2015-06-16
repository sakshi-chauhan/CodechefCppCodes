#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
 
int scan(){
	int n=0;
	char ch;
	ch=gc();
	while(ch<'0' || ch >'9')
		ch=gc();
	while(ch>='0' && ch<='9'){
		n=n*10+ch-'0';
		ch=gc();
	}
		return n;
}

int print(int n){
	int i=0;
	char ch[6]={-1};
	while(n>0){
		ch[i++]='0'+n%10;
		n=n/10;
	}
	while(i-->0){
		pc(ch[i]);
	}
	pc('\n');
}

int main(){
	int n,t,i,tmp,result;
	t=scan();
	while(t--){
		n=scan();
		result=0;
		char num[100001]={0};
		while(n--){
			tmp=scan();
			if(num[tmp]==0){
				num[tmp]=1;
				result++;
			}
		}
		print(result);
	}
	return 0;
}
