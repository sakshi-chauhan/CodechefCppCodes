#include<iostream>
int main(){
    int t,count,len;
    std::string str;
    std::cin>>t;
    while(t--){
               std::cin>>str;
               count=2;
               len=11*str.length();
               for(int i=1;i<str.length();i++){
                       if (str[i]<str[i-1])      
                          count+=26-(str[i-1]-str[i]);
                       else
                          count+=str[i]-str[i-1];
                       count++;                                   
               } 
               //std::cout<<count;          
               if(count<=len)
                          std::cout<<"YES\n";
               else
                          std::cout<<"NO\n";            
    }
    return 0;    
}
