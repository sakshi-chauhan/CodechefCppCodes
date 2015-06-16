#include<iostream>
int main(){
    int t,n;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               if(n%7==0)
                     std::cout<<n<<'\n';
               else{
                    while(n>0) { 
                               n=n-4; 
                               if(n%7==0){ 
                                          std::cout<<n<<'\n';
                                          break;
                               }           
                    }
                    if(n%7!=0)
                         std::cout<<"-1\n";     
               }                 
    }
    return 0;    
}
