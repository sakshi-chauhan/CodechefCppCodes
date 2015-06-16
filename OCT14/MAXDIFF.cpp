#include<iostream>
#include<algorithm>
#include<cstdlib>
int main(){
    int t,n,k,i,sum1,sum2,tot;
    int a[105];
    std::cin>>t;
    while(t--){
               sum1=0;sum2=0;tot=0;
               std::cin>>n>>k;
               for(i=0;i<n;i++){
                   std::cin>>a[i];
                	tot+=a[i];   
               }
               std::stable_sort(a,a+n); 
               for(i=0; i<k; i++) sum1 += a[i];
  			   for(i=n-1; i>n-k-1; i--) sum2 += a[i];
               /*for(i=0;i<n;i++){
                    if(i<k)
                       sum1+=a[i];
                    else
                       sum2+=a[i];  
               }*/
              // std::cout<<sum2-sum1<<'\n';
              sum1=abs(sum1);
               sum2=abs(sum2);
               //cout<<tot<<endl;
               if(abs(sum1-(tot-sum1))>abs(sum2-(tot-sum2))) 
                  std::cout<<abs(sum1-(tot-sum1))<<'\n';
               else std::cout<<abs(sum2-(tot-sum2))<<'\n';
 
    }
    return 0;    
}
