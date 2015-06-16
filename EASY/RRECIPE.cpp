#include<iostream>
int main(){
    int t,i,n,ans,len;
    std::string s;
    std::cin>>t;
    while(t--){
               std::cin>>s; 
               len=s.length(); 
               ans=1;         
               if(s.length()%2)
                  n=(len-3)/2;
               else
                  n=len/2-1;
               
               for(i=0;i<=n;i++){         
                      if(s[i]=='?' && s[len-i-1]=='?')
                         ans=(ans*26)%10000009;                  
                      else if(s[i]=='?'||s[len-i-1]=='?')
                         ans=(ans*1)%10000009;
                      else if((s[i]>='a' && s[i]<='z')&&(s[len-i-1]>='a'&&s[len-i-1]<='z')){
                           if(s[i]!=s[len-i-1]){
                            ans=(ans*0)%10000009;
                            break; 
                           } 
                           else
                            ans=(ans*1)%10000009;   
                      }                
               } 
               if(len%2==1 && i==len/2 &&s[i]=='?')
                         ans=(ans*26)%10000009;       
               //ans%=10000009;          
               std::cout<<ans<<'\n';
    }
    return 0;    
}
