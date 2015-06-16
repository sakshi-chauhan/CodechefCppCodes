#include<iostream>
#include<algorithm>
int main(){
    int t,n,i,sum;
    int w[102];
    std::cin>>t;
    while(t--){
               sum=0;
               std::cin>>n;
               for(i=0;i<n;i++){
                      std::cin>>w[i];
                      sum+=w[i];                           
               }
               std::stable_sort(w,w+n);
               std::cout<<sum-n*w[0]<<'\n';
    }
    return 0;    
}
