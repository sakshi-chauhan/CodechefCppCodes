#include<iostream>
#include<algorithm>
int main(){
    int n,d,i,pair=0;
    int l[100005];
    std::cin>>n>>d;
    for(i=0;i<n;i++)
          std::cin>>l[i];
    std::stable_sort(l,l+n);
    for(i=0;i<n-1;){
          if(l[i+1]-l[i]<=d){
              i+=2;
              pair++;                                  
          } 
          else
              i++;                                             
    }      
    std::cout<<pair<<'\n';
    return 0;    
}
