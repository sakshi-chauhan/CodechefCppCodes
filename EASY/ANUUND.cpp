#include<iostream>
#include<algorithm>
int main(){
    int t,i,n,j;
    long long a[600002];//,b[600002];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               for(i=0;i<n;i++)
                     std::cin>>a[i];
               std::stable_sort(a,a+n);
               int sptr = 0, eptr = n-1;
		       for(int i=0; i<n; i++) {
			           if(i&1) {
				               std::cout<<a[eptr--];
                       }
                       else {
				               std::cout<<a[sptr++];
			                }
               }
               std::cout<<'\n';                 
    }
    return 0;    
}
