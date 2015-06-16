#include<iostream>
#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
 
using namespace std; 
 
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
    
    int T,N;
    long long int res;
    
    //T = scan();
    scanf("%d",&T);
    
    while( T-- ){
           
           //N = scan();
           scanf("%d",&N);
           
           if( (N==1) || (N==2) || (N==3) ){
               printf("0\n");
               continue;   
           }
           
           res = (N/2*(N/2-1))/2;  
           printf("%llu\n",res);
          
    }
    
    return 0;    
}
