#include<iostream>
int fact(int n){
    if(n==0 || n==1)
            return 1;
    int f=1;
    while(n>=1){        
        f*=n;   
        n--;     
    }
    return f;
}
int C(int n,int r){
    return (fact(n) / (fact(r) * fact(n-r)));    
}
int main(){
    int t,n;
    long long res;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               if(n==1)
                       std::cout<<"1\n";
               else{        
                   res=C(2*(n-1),(n-1)); 
                   if(n!=0)
                        res/=n;
                   res%=10000;          
                   std::cout<<res<<'\n';
               }
    }
    return 0;    
}
