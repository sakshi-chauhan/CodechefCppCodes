#include<iostream>
#include<cstring>
int main(){
    int t,n,count;
    t=10;
    int arr[6];
    memset(arr,0,sizeof(arr));
    while(t--){
               count=0;
               for(int i=0;i<10;i++){
                       std::cin>>n;
                       n%=42;
                       if(arr[n]==0){
                           arr[n]=1;  
                           count++;  
                       }         
               }           
               std::cout<<count<<'\n';
    }
    return 0;    
}
