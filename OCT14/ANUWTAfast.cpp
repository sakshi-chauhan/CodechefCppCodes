#include<stdio.h>
//#include<iostream>
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

int print(long long n){
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
    
    long long T,n;
    long long result;
    
    T = scan();
    
    while( T-- ){
           
           n = scan();
           
           result = (n * (n+3) / 2);              
           
           print(result);
           //std::cout<<result<<'\n';
    }
    
    return 0;
        
}
