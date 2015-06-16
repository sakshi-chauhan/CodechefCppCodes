#include<iostream>
void show(std::string s,int l){
      for(int i=0;i<l;i++)
                     std::cout<<s[i];     
}
int main(){
    int t,n,k,len,i,j;
    int flag=1;
    std::string str;
    std::cin>>t;
    while(t){
             std::cin>>n>>k;
             std::cin>>str;
             len=str.length();
             while(len>k){
                        if(flag==1){
                            for(i=0;i<len;i++){
                                    if(str[i]=='1'){
                                    for(j=i;j<len-1;j++){
                                            str[j]=str[j+1];
                                            }
                                    str[j]='\0';
                                    break;
                                    }              
                            }
                            if(i==len){
                                    str[len-1]='\0';
                            }
                            flag=0;             
                        }
                        else{
                             for(i=0;i<len;i++){
                                     if(str[i]=='0'){
                                     for(int j=i;j<len-1;j++)
                                            str[j]=str[j+1];
                                           break;        
                                     }
                                    // str[j]   
                             } 
                             if(i==len){
                                     str[len-1]='\0'; 
                             }  
                             flag=1; 
                        }
                        len--; 
                        //show(str,len);
                        //std::cout<<'\n';
             } 
             show(str,len);
             t--;         
    } 
    std::cout<<'\n';
    system("pause");   
}
