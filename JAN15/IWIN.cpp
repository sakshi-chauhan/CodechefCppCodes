#include <bitset>
#include <iostream>
#include <climits>
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
/*size_t popcount(size_t n) {
    std::bitset<sizeof(size_t) * CHAR_BIT> b(n);
    return b.count();
}*/

/*int bitcount(long long int u){
     unsigned int uCount;

     uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
     return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}
*/
int bitcount(int n){
    return __builtin_popcount(n);
}
int main(){
    
    long long int T,J,sum,X,countsum;
    
    T = scan();
    
    while( T-- ){
           
           //std::cin>>J;
           J = scan();
           
           sum = J;
           for( int i = 1 ; i < 15 ; i++ ){
                //std::cin>>J; 
                J = scan();
                sum ^= J;              
           }      
           //std::cin>>X;
           X = scan();
           
           countsum = bitcount(sum);
           
           if( countsum > X )
               std::cout<<"YES\n";
           else
               std::cout<<"NO\n";    
    }
    
    return 0;    
}
