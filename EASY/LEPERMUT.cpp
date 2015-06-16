#include<iostream>
int main(){
    int t,n,inv,local_inv;
    int a[100];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               local_inv=0;
               inv=0;           
               for(int i=0;i<n;i++)
                       std::cin>>a[i];
               for(int i=0;i<n-1;i++){
                       for(int j=i+1;j<n;j++){
                               if(a[i]>a[j]){
                                      if(j==i+1)
                                          local_inv++;
                                      inv++;                               
                               }        
                       }        
               } 
               if(inv==local_inv)
                       std::cout<<"YES\n";
               else
                       std::cout<<"NO\n";                         
    }
    return 0;    
}
