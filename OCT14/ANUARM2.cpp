#include<iostream>
#include<stdio.h>
#include<math.h>
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
    
    int T,n,m,max,i,min,p;
    
    T = scan();
    
    while( T-- ){
           
           n = scan();
           m = scan();       
           
           max = 0;
           min = n-1; 
           
           for( i=0 ; i<m ; i++ ){
           
               p = scan();           
                
               if ( p > max )
                  max = p;
                  
               if( p < min )
                  min = p;
                       
           }
           
           for( i=0 ; i<n ; i++ ){
                if( abs(i - min) > abs(i - max) )
                    std::cout<<abs(i-min)<<" ";
                    //print(abs(i-min));
                else
                    std::cout<<abs(i-max)<<" ";
                    //print(abs(i-max));
           }
           std::cout<<'\n';    
    }
    
    return 0;    
}
