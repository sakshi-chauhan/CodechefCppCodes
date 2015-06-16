#include<iostream>
int main(){
    int t,m,n,m1,count;
    int marray[1002];
    std::cin>>t;
    while(t--){
               count=0;
               for(int i=0;i<1002;i++)
                       marray[i]=i;
               std::cin>>n;
               std::cin>>m;       
               for(int i=1;i<=m;i++){
                       std::cin>>m1;        
                       marray[m1]=-1;
               }    
               for(int i=1;i<=n;i++){
                       if(marray[i]>0){
                          count++;
                          if(count%2){        
                              std::cout<<i<<" ";
                              marray[i]=-1;
                          }  
                       }          
               }
               std::cout<<'\n';
               for(int i=2;i<=n;i++){
                       if(marray[i]>0){
                          std::cout<<i<<" ";             
                       }
               }
               std::cout<<'\n';
    }
    return 0;
}
