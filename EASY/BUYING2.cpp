#include<iostream>
int main(){
    int t,n,x,sum,res,flag;
    int a[100];
    std::cin>>t;
    while(t--){
               std::cin>>n>>x; 
               sum=0; 
               flag=0;         
               for(int i=0;i<n;i++){
                       std::cin>>a[i];
                       sum+=a[i];        
               }
               res=sum/x;
               for(int i=0;i<n;i++){
                       if((sum-a[i])/x==res){
                             flag=1;
                             break;
                       }                       
               }
               if(flag==1)
                          std::cout<<"-1\n";
               else
                          std::cout<<res<<'\n';           
    }
    return 0;    
}
