#include<stdio.h>
#include<string.h>
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
    int t,n,m,ci,li,power;
    int intpower[110],floatpower[110];
        
    t=scan();;
    
    while(t--){
                n=scan();
                m=scan();
                
                power=0;
                memset(intpower,0,sizeof(intpower));
                memset(floatpower,0,sizeof(floatpower));
                
                for( int i=0; i<n; i++ ){
                     ci=scan();
                     li=scan();
                     intpower[li]+=ci;
                }
                
                for( int i=0; i<m; i++ ){
                     ci=scan();
                     li=scan();    
                     floatpower[li]+=ci; 
                }          
                
                for( int i=1; i<=100; i++ ){
                          if(intpower[i] < floatpower[i])
                              power+=(floatpower[i] - intpower[i]);           
                }
                
                print(power);
                
    }
    return 0;    
}
