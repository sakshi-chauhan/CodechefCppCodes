#include<iostream>
int main(){
    int t,n;
    std::cin>>t;
    while(t--){
               std::cin>>n;           
               if(360%n==0)
                  std::cout<<"y ";
               else   
                  std::cout<<"n ";
               if(n<=360)
                  std::cout<<"y ";
               else
                  std::cout<<"n ";
               if((n*(n+1))<=720)
                  std::cout<<"y\n";
               else
                  std::cout<<"n\n";                 
    }
    return 0;    
}
