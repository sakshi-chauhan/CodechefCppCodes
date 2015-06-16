#include <iostream>
int main() {
	// your code goes here
	int t,n;
	long long ans;
	std::cin>>t;
	while(t--){
		std::cin>>n;	
		ans=2*n*(n-1)*(n-1) + n*(n-1)*(n-2) + 2*n*(n-1)*(n-2)*(n-2);
		std::cout<<ans<<'\n';
	}
	return 0;
}
