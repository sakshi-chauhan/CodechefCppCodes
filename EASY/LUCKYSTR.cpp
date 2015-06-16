#include<iostream>
#include<cstring>
int main(){
    int n,k,i,j,flag;
    char str1[52][52],str2[52];
    std::cin>>k>>n;
    for(i=0;i<k;i++)
            std::cin>>str1[i];        
    for(i=0;i<n;i++){
             flag=0;        
             std::cin>>str2;
             if(strlen(str2)>=47)
                std::cout<<"Good\n";
             else{
                  for(j=0;j<k;j++){
                       if(strstr(str2,str1[j])){
                             flag=1;
                             break;                                            
                       }
                  }
                  if(flag)
                          std::cout<<"Good\n";
                  else
                          std::cout<<"Bad\n";      
             }                              
    }
    return 0;    
}
