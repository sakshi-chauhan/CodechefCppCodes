#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#define gc getchar_unlocked
#define pc putchar_unlocked
 
int arr[100005]; 
 
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
    
    int T,N,u,i,j,k,M,p;
    //int* arr;
    
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
           
           //std::cin>>N>>u; 
           N = scan();
           u = scan();
           
           //arr = (int*)malloc( N * sizeof(int));      
           memset(arr,0,sizeof(arr));
           
           for( int a = 0 ; a < u ; a++ ){
                
                i = scan();
                j = scan();
                k = scan();    
                
                for( int b = i ; b <= j ; b++ )
                     arr[b] += k; 
                
           }
           
           M = scan();
           
           for( int a = 0 ; a < M ; a++ ){
                
                p = scan();  
                //std::cout<<arr[p]<<"\n";   
                print(arr[p]);
                
           }
           
    }
    
    return 0;
        
}
