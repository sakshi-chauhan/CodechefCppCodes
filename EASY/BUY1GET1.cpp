#include<iostream>
int main(){
    int t,i,j,count,flag;
    std::string s;
    std::cin>>t;
    while(t--){
               count=0;
               std::cin>>s;
               for(i=0;i<(s.length()-1);i++){
                       if(s[i]!=0){
                           flag=0;
                           for(j=i+1;j<s.length();j++){
                                   if(s[j]!=0 &&!flag){
                                       if(s[i]==s[j]){
                                                      count++;               
                                                      s[j]=0;
                                                      flag=1;
                                       }        
                                   }
                           }        
                           if(flag==0)
                                 count++; 
                       }    
               }  
               if(i==(s.length()-1)&&s[i]!=0)
                     count++;                                 
               std::cout<<count<<'\n';
    }
    return 0;    
}
