#include<iostream>
int main(){
    int t,n,k,count;
    int a[60];
    std::cin>>t;
    while(t--){
               std::cin>>n>>k;
               
               count=0;
               
               for(int i=0;i<n;i++)
                       std::cin>>a[i];
               
               if(k==0){
                      for(int i=0;i<n;i++){
                           if(a[i]%2){
                                  std::cout<<"YES\n";
                                  break;       
                           }
                      }
               }
               
               else{                
                   for(int i=0;i<n;i++){
                           if(a[i]%2==0){
                                         count++;
                                         if(count==k)
                                                     break;             
                           }        
                   }                   
                   if(count==k)
                                   std::cout<<"YES\n";
                   else
                                   std::cout<<"NO\n"; 
                    
               }          
    }
    return 0;
}
