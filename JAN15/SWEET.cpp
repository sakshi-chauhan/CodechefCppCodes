#include<iostream>
#include<cstdio>
#include<climits>
#define gc getchar_unlocked
#define pc putchar_unlocked
#define ll long long
 
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

ll max( ll x, ll y ){ 
    return (y > x)? y : x; 
}
 
/*ll maxSubArraySum( ll* a, int size){
   ll max_so_far = a[0], i;
   ll curr_max = a[0];
 
   for (i = 1; i < size; i++){
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}*/
int main(){
    
    ll T,N,X,i;
    ll C;
    ll max_so_far;
    ll curr_max ;
    
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
           
           //std::cin>>N>>X;       
           N = scan();
           X = scan();
           //C = (ll*)malloc(N*sizeof(ll*));
           //max = 0;
           //sum = 0;
           
           //std::cin>>C;
           //C = scan();
           max_so_far = 0;
           curr_max = 0;
           
           for( i = 0 ; i < N ; i++ ){
                
                //std::cin>>C;
                C = scan();
                C -= X;
                
                curr_max = max( C , curr_max+C );
                max_so_far = max(max_so_far, curr_max);
                
           }
           //std::cout<<max<<"\n";
           std::cout<<max_so_far<<"\n";
          
    }
    
    return 0;
        
}
