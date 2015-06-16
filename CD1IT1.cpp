#include<iostream>
#include<algorithm>
#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked

using namespace std; 

long long int scan(){
	long long int n=0;
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

long long int print(long long int n){
	long long int i=0;
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
    
    int N;
    long long int* arr;
    
    //cin>>N;
    N = scan();
    
    arr = new long long int[N];
    
    for( int i = 0 ; i < N ; i++ )
         //cin>>arr[i];     
         arr[i] = scan();
    
    sort(arr,arr+N);
    
    if( N%2 )
        //cout<<arr[N/2]<<"\n";
        print(arr[N/2]);
    else
        //cout<<arr[N/2-1]<<"\n"; 
        print(arr[N/2-1]);   
    
    return 0;    
}
