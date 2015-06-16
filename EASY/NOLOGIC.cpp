#include<iostream>
#include<cstdio>
#include<cstring>
int main(){
    int t,i,found;
    int used[130];
    std::string s;
    scanf("%d",&t);
    char c;
    scanf("%c", &c);
    while(t--){
               memset(used, 0, sizeof(used));
               std::cin>>s;
               for(i=0;i<s.length();i++)
                    used[s[i]]++;  
               found=0;
               for(i=65;i<91;i++){
                     if(used[i]==0 && used[i+32]==0){
                         found=1;      
                         printf("%c\n",i);        
                         break;    
                     }                
               }              
               if(found==0)
                    std::cout<<"~\n";
    }
    return 0;    
}
