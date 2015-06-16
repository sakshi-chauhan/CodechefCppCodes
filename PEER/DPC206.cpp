#include<iostream>
int reverse(int n){
    int rem=0;
    while(n>0){
    rem = (rem*10) + (n%10);
    n=n/10;
    }
    return rem;
}
int main(){
    int t,n,rev,count;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               rev = reverse(n);
               count = 0;
               while(rev!=n){
                   n = n + rev;          
                   rev = reverse(n);
                   count++;
               }           
               std::cout<<count<<" "<<n<<'\n';
    }
    return 0;   
}
