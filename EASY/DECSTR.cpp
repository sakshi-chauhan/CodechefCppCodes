#include<iostream>
#include<cstring>
int main(){
    int t,x,y,k;
    char string[27],reverse[27];
    strcpy(string,"abcdefghijklmnopqrstuvwxyz");
    strcpy(reverse,"zyxwvutsrqponmlkjihgfedcba");
    std::cin>>t;
    while(t--){
    std::cin>>k;
    x=k/25, y=k%25;
    if(y){
          while(y>=0) 
                std::cout<<string[y--];            
    }
    while(x--)
          std::cout<<reverse;
    std::cout<<'\n';
    }
return 0;
} 
