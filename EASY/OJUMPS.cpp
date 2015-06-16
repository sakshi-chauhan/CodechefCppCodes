#include<iostream>
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

int main(){
    
    long long a;
    
    a = scan();
    
    if( (a%6==0) || (a%6==1) || (a%6==3) )
        std::cout<<"yes";
    else
        std::cout<<"no";      
    return 0;
        
}
