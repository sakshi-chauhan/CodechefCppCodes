#include<iostream>
#include<stdio.h>
#include<cstring>

#define gc getchar_unlocked
#define pc putchar_unlocked
#define MAX 100005

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
    
    std::ios::sync_with_stdio(false);
    
    int T,n,m,i,j,p,val;
    int pos[MAX];
    
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
           
           //std::cin>>n>>m;
           n = scan();
           m = scan();
           
           memset(pos,0,sizeof(pos));
          // for( i=0 ; i<MAX ; i++ )
            //    pos[i] = 0;
           
           for( i=0 ; i<m ; i++ ){
                
                //std::cin>>p;
                p = scan();
                
                for( j=0 ; j<p ; j++ ){
                     
                     val = p - j;
                     if ( val > pos[j] )     
                        pos[j] = val;
                     
                }
                
                for( j=p+1 ; j<n ; j++ ){
                     
                     val = j - p;
                     if ( val > pos[j] )     
                        pos[j] = val;
                     
                }
                     
           }
           
           for( i=0 ; i<n ; i++ )
                std::cout<<pos[i]<<" ";
           
           std::cout<<"\n";       
    }
    
    return 0;
        
}
