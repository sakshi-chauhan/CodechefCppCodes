#include<iostream>
int max(int a,int b){
    return a>b?a:b;    
}
int main(){
    int t,n,count,res;
    int arr[100],dep[100];
    std::cin>>t;
    while(t--){
               res=0;
               std::cin>>n;
               for(int i=0;i<n;i++)
                       std::cin>>arr[i];
               for(int i=0;i<n;i++)
                       std::cin>>dep[i];
               for(int i=0;i<=1000;i++){
                       count=0;
                       for(int j=0;j<n;j++){
                               if(arr[j]<=i && i<dep[j])
                                            count++ ;       
                       }
                       res=max(res,count);
               }  
               std::cout<<res<<'\n';      
    }
    return 0;
}
