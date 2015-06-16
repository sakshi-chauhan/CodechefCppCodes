#include<iostream>
int main(){
    int t,len,flag;
    std::string str;
    std::cin>>t;
    while(t--){
               std::cin>>str;
               if(str.length()%2)
                    len=str.length()/2+1;
               else
                    len=str.length()/2;               
               for(int i=0;i<str.length()/2;i++){
                       for(int j=len;j<str.length();j++){
                               flag=0;
                               if(str[i]==str[j]){ 
                                     str[j]=-1;
                                     flag=1;
                                     break;
                               }
                       }        
                       if(flag==0)
                          break;
               }           
               if(flag==0)
                          std::cout<<"NO\n";
               else
                          std::cout<<"YES\n";           
    }
    return 0;
}
