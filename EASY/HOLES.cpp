#include<iostream>
int main(){
    int t,holes;
    std::string s;  
    std::cin>>t;  
    while(t--){
             holes=0;  
             std::cin>>s;  
             for(int i=0;s[i];i++){
                     if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
                            holes++;
                     else if(s[i]=='B')
                            holes+=2;                    
             }    
             std::cout<<holes<<'\n';
    }
    return 0;
}
