#include<iostream>
#include<cstring>
int max(int a,int b){
    return a>b?a:b;    
}
int main(){
    int n,q,i,rc,num,maxr,maxc;
    long long totalRowIncrement[320000],totalColIncrement[320000];
    memset(totalRowIncrement,0,sizeof(totalRowIncrement));
    memset(totalColIncrement,0,sizeof(totalColIncrement));
    char oper[8];
    std::cin>>n;
    std::cin>>q;
    for(i=0;i<q;i++){
        std::cin>>oper;
        std::cin>>rc;
        std::cin>>num;
        if(oper[0]=='R')
           totalRowIncrement[rc]+=num;
        else
           totalColIncrement[rc]+=num;                                 
    }
    maxr=0;
    maxc=0;
    for(i=1;i<=n;i++){
           maxr=max(maxr,totalRowIncrement[i]);                 
           maxc=max(maxc,totalColIncrement[i]);          
    }
    return 0;    
}
