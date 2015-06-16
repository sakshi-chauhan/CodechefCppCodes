#include<iostream>
int main(){
    int n,nd,sum=0;
    long a[100000];
    std::cin>>n;
    for(int i=0;i<n;i++)
               std::cin>>a[i];           
    for(int i=0;i<n-1;i++){
               for(int j=i+1;j<n;j++){
                       nd=a[i]&a[j];         
                       sum+=nd;
               }     
    }
    std::cout<<sum;
    return 0;    
}
