#include<iostream>
#include<algorithm>
#include<cstring>
bool correct(char *r,char*s){
     int l1=strlen(r);
     int l2=strlen(s);
     std::sort(r,r+l1);
     std::sort(s,s+l2);
     if(!strcmp(r,s))
         return 1;  
     else
         return 0;     
}
bool wrong(char *r, char *s){
    bool usedr[26],useds[26]; 
    memset(usedr,0,sizeof(usedr));
    memset(useds,0,sizeof(useds));
    for(int i = 0; i < strlen(r); i++)
        usedr[r[i] - 'a'] = true;
    for(int i = 0; i < strlen(s); i++)
        useds[s[i] - 'a'] = true;
    bool res = 1;
    for(int i = 0; i < 26; i++){
        if (usedr[i] != useds[i])
            res = 0;
    }
    return res;
}
int main(){
    char r[1000],s[1000];
    int t,l1,l2;
    std::cin>>t;
    while(t--){
               std::cin>>r>>s;
               if(correct(r,s) == wrong(r,s))
                   std::cout<<"YES\n";
               else
                   std::cout<<"NO\n";                                                   
    }     
    return 0;    
}
