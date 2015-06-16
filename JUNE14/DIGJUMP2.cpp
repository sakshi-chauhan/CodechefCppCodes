#include<iostream>
int main(){
    int i,count=0;
    int occ[10];
    std::string str;
    std::cin>>str;
    for(i=0;i<10;i++)
          occ[i]=-1;
    for(i=0;i<str.length();i++){
         if(occ[str[i]-'0']<0){
            occ[str[i]-'0']=i;                            
            }
    }   
    for(i=str.length()-1;i>0;i--){
          if(occ[str[i]-'0']!=i){
             i=occ[str[i]-'0']+1;
             if(i>1)            
             count++;            
             }
          else count++;                                                                   
    }
    std::cout<<count;
    return 0;    
}
