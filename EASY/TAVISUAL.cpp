#include<iostream>
int main(){
    int t,n,c,q,l,r;
    std::cin>>t;
    while(t--){
               std::cin>>n>>c>>q;
               for(int i=0;i<q;i++){
                       std::cin>>l>>r;
                       if(c>=l && c<=r)
                               c=l+r-c;        
               }      
               std::cout<<c<<'\n';     
    }
    return 0;    
}
