#include <iostream>
#include<stdlib.h>

int max(long long a,long long b){
	return (a>b)?a:b;	
}

int main() {
	int t;
	long long x,y,res;
	std::cin>>t;
	while(t--){
		std::cin>>x>>y;	
		if(((x+y)%2)==0){
			x=abs(x);
			y=abs(y);
		    res=2*max(x,y);
		}
		else{
			x=abs(x);
			y=abs(y)-1;
			y=abs(y);
			res=1 + 2*max(x,y);
		}
		std::cout<<res<<'\n';
	}
	return 0;
}
