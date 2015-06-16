#include<iostream>
int main(){
    int n,a,b,winner,lead,pos,max=0,pl1=0,pl2=0;
    std::cin>>n;
    while(n--){
                     std::cin>>a>>b;
                     pl1+=a;
                     pl2+=b;
                     if(pl1>pl2){
                                 lead =pl1-pl2;
                                 pos=1;           
                     }     
                     else{
                                 lead=pl2-pl1;
                                 pos=2;     
                     }
                     if(lead>max){
                                  max=lead;
                                  winner=pos;             
                     }
    }
     printf("%d %d",winner,max);
    return 0;    
}
