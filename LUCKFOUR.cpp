#include<iostream>
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

long long int print(int n){
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
    
    int T;
    long long int N;
    long long int count;
    
    std::ios::sync_with_stdio(false);
    //cin>>T;
    T = scan();
    
    while( T-- ){
           
           //cin>>N;
           N = scan();
           count = 0;
           
           if( (N >= 0) && (N <= 9) ){
               
               if( N == 4 )
                   //cout<<"1\n"; 
                   printf("%d\n",1);
               else
                   //cout<<"0\n";
                   printf("%d\n",0);       
           }       
           else{
                
                while( N > 0 ){
                       
                       if( N % 10 == 4 )
                           count++;       
                       
                       N /= 10;
                }     
                //cout<<count<<"\n";  
                if( count )  
                    print(count);
                else
                    //cout<<"0\n";    
                    printf("%d\n",0);
           }
    }
    
    return 0;
        
}
