#include<iostream>
int main(){
    int t,n,count;
    int stones[100];
    std::cin>>t;
    while(t--){
               count=0;
               std::cin>>n;
               for(int i=0;i<n;i++)
                   std::cin>>stones[i];
               for(int i=0;i<n;i++)
                  count+=stones[i]/(i+1);
               if(count % 2 == 0)                  
                   std::cout<<"BOB\n";
               else
                   std::cout<<"ALICE\n";    
    }
    return 0;    
}
