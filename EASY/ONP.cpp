#include<iostream>
#include<stack>
int main(){
    int t;
    std::string s;
    std::stack<char> op;
    std::cin>>t;
    while(t--){
               std::cin>>s;
               for(int i=0;i<s.length();i++){
                       if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^')  
                              op.push(s[i]);      
                       else if(s[i]==')'){
                              std::cout<<op.top();
                              op.pop();
                       }
                       else if(s[i]=='(');
                       else
                              std::cout<<s[i];                                          
               }           
               std::cout<<'\n';
    }
    return 0;    
}
