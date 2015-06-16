#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked

using namespace std;
int freq[100005];
 
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

bool cmp( int a , int b ){

     return a>b;     
     
}

int main(){
    
    int T,N;
    int* arr;
    
    //cin>>T;
    T = scan();
    
    while( T-- ){
           
           //cin>>N;
           N = scan();
           arr = new int[N];
           memset(freq,0,sizeof(freq));       
           
           for( int i = 0 ; i < N ; i++ ){
                
                //cin>>arr[i];     
                arr[i] = scan();
                freq[arr[i]]++;
                
           }
           sort(freq,freq+100005,cmp);
           
           int res = N - freq[0];
           print(res);
           //cout<<N-freq[0]<<"\n";
    }
    
    return 0;    
    
}
