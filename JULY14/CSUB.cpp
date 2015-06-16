#include<iostream>
int main(){
    //t,n;
    long long count,res,t,n;
    char str[1000000000];
    std::cin>>t;
    while(t--){
               count=0;
               std::cin>>n;
               std::cin>>str;           
               for(int i=0;i<n;i++){
                       if(str[i]=='1')
                           count++;                   
               }
               res=(count*(count+1))/2;
               std::cout<<res<<'\n';
    }
    return 0;    
}
