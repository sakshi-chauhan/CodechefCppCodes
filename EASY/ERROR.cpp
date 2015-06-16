#include<iostream>
int main(){
    int t,pos;
    std::string s;
    std::cin>>t;
    while(t--){
               std::cin>>s;
               pos=s.find("010");
               if(pos!=std::string::npos)
                   std::cout<<"Good\n";
               else{
                    pos=s.find("101");
                    if(pos!=std::string::npos)
                         std::cout<<"Good\n";
                    else
                         std::cout<<"Bad\n";     
               }               
    }
    return 0;    
}
