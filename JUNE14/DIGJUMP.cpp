#include<iostream>
int main(){
    std::string str;
    int i,j,flag,count=0;
    std::cin>>str;
    for(i=0;i<str.length();i++){
          flag=0;                      
          if(i==str.length()-1)
             break;
          else{
               for(j=i+1;j<str.length();j++){
                     if(str[i]==str[j]){
                           flag=1;
                           i=j-1;   
                           break;                             
                     }                                                      
               }     
               count++;
          }                         
    }
    std::cout<<count;
    return 0;    
}
