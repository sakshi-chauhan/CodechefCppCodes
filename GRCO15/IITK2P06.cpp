#include<iostream>
#include<cstdio>
#define gc getchar_unlocked
#define pc putchar_unlocked
 
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

long long int abs( long long int n ){
     
     return ((n < 0) ? -n : n );
          
}
int main(){
    
    int T;
    long long int e,o,res;
    
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
           
           //std::cin>>e>>o;       
           e = scan();
           o = scan();
           
           res = abs( 3*e - 2*o );
           
           if( res % 5 )
               //std::cout<<"-1\n";
               //print("-1");
               printf("%d\n",-1);
           
           else {               
               //std::cout<<res/5<<"\n";      
               res /= 5;
               print(res);
               //printf("%lld\n",res);
               
           }
       
    }
    
    return 0;
        
}
