#include<iostream>
#include<cstring>
int main(){
    int t;
    char a[100],b[100];
    std::cin>>t;
    while(t--){
               std::cin>>a>>b;
               if(strstr(a,b))
                   std::cout<<"1\n";           
               else
                   std::cout<<"0\n";    
    }
    return 0;    
}
