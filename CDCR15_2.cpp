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
    
    int T,x,y,z;
    
    T = scan();
    
    while( T-- ){
           
           x = scan();
           y = scan();
           z = scan(); 
           
           x *= z;
           x -= y*z;     
           
           if( x % y == 0 )
               cout<<x/y<<"\n";
           else
               cout<<x/y+1<<"\n";    
           
    }
    
    return 0;
        
}
