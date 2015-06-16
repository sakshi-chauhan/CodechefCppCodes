#include<iostream>
bool isSubsetSum(int set[],int n,int sum){
   if(sum==0)
           return true;
   if(n==0&&sum!=0)
           return false;
   if(set[n-1]>sum)
           return isSubsetSum(set, n-1, sum);
   return  isSubsetSum(set,n-1,sum)||isSubsetSum(set,n-1,sum-set[n-1]);
}
int main(){
    int t,n,m;
    int set[20];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               std::cin>>m;           
               for(int i=0;i<n;i++)
                       std::cin>>set[i];
               if(isSubsetSum(set,n,m))
                       std::cout<<"Yes\n";
               else
                       std::cout<<"No\n";                          
    }
    return 0;
}
