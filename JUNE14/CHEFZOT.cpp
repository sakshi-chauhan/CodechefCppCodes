#include<iostream>
int main(){
    int n,i,a[100005];
    int len=0,max=0;
    std::cin>>n;
    for(i=0;i<n;i++){ 
           len=0;
           std::cin>>a[i]; 
           if(a[i]>0){
               len++;
               i++;
               if(i<n)
                      std::cin>>a[i]; 
               while(a[i]>0){
                  len++;    
                  i++;
                  if(i<n)
                      std::cin>>a[i];
               }
           }            
           if(len>max)
              max=len;             
    }
    std::cout<<max;
    return 0;    
}
