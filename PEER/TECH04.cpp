#include<iostream>
int main(){
    int t;
    std::string s1,s2;
    std::cin>>t;
    while(t--){
               int flag=1;
               std::cin>>s1>>s2;
               if(s1.size()!=s2.size())
                   flag=0;                     
               else{    
                   for( int i = 0 ; i<s1.size() && flag ; i++ ){
                        flag=0;
                        for( int j = 0; j<s2.size() && !flag; j++){
                             if(s2[j] != '0'){
                                   if(s2[j] == s1[i]){
                                      s2[j] = '0';
                                      flag = 1;
                                   }              
                             }     
                        } 
                   }
               }  
               if(flag)
                   std::cout<<"YES\n";
               else
                   std::cout<<"NO\n";             
    }
    return 0;    
}
