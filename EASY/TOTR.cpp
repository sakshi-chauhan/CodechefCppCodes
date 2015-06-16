#include<iostream>
#include<cctype>
int main(){
    int t;
    std::string str1,str2;
    char arr1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char arr2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    std::cin>>t;
    std::cin>>str1;
    while(t--){
               std::cin>>str2;
               for(int i=0;i<str2.length();i++){
                       if(str2[i]=='_')
                             std::cout<<" ";
                       else if(ispunct(str2[i]))
                             std::cout<<str2[i];      
                       else{                
                           for(int j=0;j<26;j++){
                                   if(str2[i]==arr1[j])
                                        std::cout<<str1[j];                                 
                                   else if(str2[i]==arr2[j]){ 
                                        char temp=toupper(str1[j]);      
                                        std::cout<<temp;
                                   }
                           } 
                       }       
               }  
               std::cout<<'\n';         
    }
    return 0;    
}
