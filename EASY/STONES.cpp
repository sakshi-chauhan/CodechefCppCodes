#include<iostream>
int main(){
    int t,i,j,count;
    std::string str1,str2;
    std::cin>>t;
    while(t--){
               std::cin>>str1;
               std::cin>>str2;
               count=0;
               for(i=0;i<str1.length();i++){
                       for(j=0;j<str2.length();j++){
                               if(str2[j]==str1[i]){
                                     count++;
                                     str2[j]=-1;                                    
                               }        
                       }        
               }          
               std::cout<<count<<'\n'; 
    }
    return 0;
}
