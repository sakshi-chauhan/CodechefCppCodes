#include<iostream>
#include<stdio.h>
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
    
    int T;
    long long int sum;
    int over[26];
    std::string str;
    
    for( int i = 0 ; i < 26 ; i++ )
         over[i]=i+1;
    
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
           
          std::cin>>str;
          sum = 0;        
          for( int j = 0 ; j < str.length(); j++ )
               sum += over[str[j]-'a']; 
          
          //std::cout<<sum<<"\n";
          print(sum);
    }
    
    return 0;    
}
