#include<iostream>
#include<algorithm>
int main(){
    int t,n,k,i,sum1,sum2;
    int a[105];
    std::cin>>t;
    while(t--){
               sum1=0;sum2=0;
               std::cin>>n>>k;
               for(i=0;i<n;i++)
                   std::cin>>a[i];
               std::stable_sort(a,a+n); 
               for(i=0;i<n;i++){
                    if(i<n-k)
                       sum1+=a[i];
                    else
                       sum2+=a[i];                     
               }              
    }
    return 0;    
}
