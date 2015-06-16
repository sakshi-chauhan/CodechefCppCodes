#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
 
float scan(){
	float n=0;
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
    
    int T,U,N,M,C,pos;
    float D,R,min,cost;
    
    T = (int)scan();
    
    while( T-- ){
           
           D = scan();
           U = (int)scan();
           N = (int)scan();
                  
           min = D * U;
           pos = 0;
           
           for( int i = 1 ; i <= N ; i++ ){
                
                M = (int)scan();
                R = scan();
                C = (int)scan();
                
                cost = (float)C/M + R*U;
                
                if( cost < min ){
                    
                    min = cost;
                    pos = i;
                        
                }
                     
           }
           print(pos);
    }

    return 0;    
    
}
