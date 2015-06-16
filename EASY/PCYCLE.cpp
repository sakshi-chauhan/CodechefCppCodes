#include<iostream>
int main(){
    int n,a,arr[1002],count=0;
    bool b[1002];
    std::cin>>n;
    for(int i=1;i<=n;i++)
            std::cin>>arr[i];
    for(int i=1;i<1002;i++)
            b[i]=1;
    for(int i=1; i<=n; i++) {
        if(b[i]) {
                 count++;
                 b[i]=0;
                 a=arr[i];
                 while(a!=i){
                             b[a]=0;
                             a=arr[a];
                 }
        }
     }
     std::cout<<count<<'\n';
     for(int i=1; i<1002; i++)
             b[i]=1;
     for(int i=1; i<=n; i++) {
          if(b[i]) {
               std::cout<<i<<" ";
               b[i]=0;
               a=arr[i];
               std::cout<<a;
               while(a!=i){
                           b[a]=0;
                           a=arr[a];
                           std::cout<<" "<<a;
               }
               std::cout<<'\n';
          }
     }
                 
    return 0;    
}
