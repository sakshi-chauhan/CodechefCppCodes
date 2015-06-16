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
    bool flag = 0;
    
    a = scan();
    
    a-=1;
    if( a>=0 ){
        if( a%6 == 0 )
            flag = 1;
        else{
             a-=2;
             if( a>=0 ){
                 if( a%6 == 0 )
                     flag = 1;
                 else{
                     a-=3;
                     if( a>=0 ){
                         if( a%6 == 0 )
                             flag = 1;
                     }
                 }
             }         
        }
    }    
          
    if( flag )
        std::cout<<"yes";
    else          
        std::cout<<"no";            
    return 0;
        
}
