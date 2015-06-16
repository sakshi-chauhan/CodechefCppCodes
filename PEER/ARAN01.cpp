#include<iostream>
int main(){
    int t,sum;
    std::string s;
    std::cin>>t;
    while(t--){
               sum=0;
               std::cin>>s;
               for(int i=0;i<s.size();i++)
                  sum+=s[i];   
               sum/=s.size();           
               std::cout<<(char)(sum)<<'\n';
    }
    return 0;    
}
