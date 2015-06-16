#include<iostream>
int main(){
    int t,n,count,max;
    int arr[100],dep[100];
    std::cin>>t;
    while(t--){
               count=0;
               max=0;
               std::cin>>n;
               for(int i=0;i<n;i++)
                       std::cin>>arr[i];
               for(int i=0;i<n;i++)
                       std::cin>>dep[i];
               for(int i=0;i<=1000;i++){
                       for(int j=0;j<n;j++){
                               if(i==arr[j])
                                     count++; 
                               if(count>max)
                                     max=count;      
                               if(i==dep[j])
                                     count--;                           
                       }
               }      
               std::cout<<max<<'\n';                     
    }    
    return 0;
}
