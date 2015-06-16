#include<iostream>
#include<stdlib.h>
#include<limits.h>
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
int main(){
    int t,i,n,min,diff,s[5002];
    std::cin>>t;
    while(t--){
               std::cin>>n; 
               min=INT_MAX;          
               for(i=0;i<n;i++)
                   std::cin>>s[i];
               qsort(s,n,sizeof(int),compare);    
               for(i=0;i<n-1;i++){
                    diff=s[i+1]-s[i];
                    if(diff<min)
                       min=diff;                                   
               }
               std::cout<<min<<'\n';
    }
    return 0;    
}
