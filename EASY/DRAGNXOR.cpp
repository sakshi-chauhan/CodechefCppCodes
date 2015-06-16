#include<iostream>
int NumberOfOnes(int x){
    if(x==0)
            return 0;
	return 1+NumberOfOnes(x&(x-1));    
}
int min(int a,int b){
    return a<b?a:b;    
}
int main(){
    int t,n,a,b,a1,b1,a2,b2,p;
    std::cin>>t;
    while(t--){
               std::cin>>n>>a>>b;
               a1=NumberOfOnes(a);
               a2=n-a1;
               b1=NumberOfOnes(b);
               b2=n-b1;         
               p=min(a1,b2)+min(a2,b1);
               int res=(((1<<p)-1)<<(n-p));
               std::cout<<res<<'\n';
    }
    return 0;    
}
