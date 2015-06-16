#include<iostream>
#include<stdio.h>
#include<cstring>
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
    
    int T,N,id,cheat;
    int* ID;
    
    T = scan();
    
    while( T-- ){
           
           N = scan();
           ID = (int*)malloc( N * sizeof(int) );       
           cheat = 0;
           memset(ID,0,N*sizeof(int));
           
           for( int i  = 0 ; i < N ; i++ ){
                
                id = scan();     
                ID[id]++;
                
                if( ID[id] == 2 )
                    cheat++;
                
           }
           
           if( cheat == 0 )
               printf("0\n");
           else         
               print(cheat);
    }
    
    return 0;
        
}
