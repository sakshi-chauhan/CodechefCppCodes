#include<iostream>
#include<cstdlib>
#include<stdio.h>

#define rep(i,N) for( i = 0 ; i < N ; i++ )
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
    
    int T,N,i;
    int* B;
    long long int sum;
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
           
           //std::cin>>N;
           N = scan();
           
           B = (int*)malloc( N * sizeof(int) ); 
           sum = 0;
           
           rep( i , N ){
                //std::cin>>B[i];    
                B[i] = scan();
                sum += B[i];
           }             
           
           if( sum < 100 )
              //std::cout<<"NO\n";
              printf("NO\n");
               
           else if( sum == 100 )
             //std::cout<<"YES\n"; 
             printf("YES\n");
           
           else{
                
               rep( i , N ){
                    if( B[i] )
                        B[i]--;
               }
                    
               sum = 0;
               
               rep( i , N )
                    sum += B[i];           
               
               if( sum >= 100 )
                   //std::cout<<"NO\n"; 
                   printf("NO\n");
               else
                   //std::cout<<"YES\n";
                   printf("YES\n");    
           }        
    }
    
    return 0;    
}
