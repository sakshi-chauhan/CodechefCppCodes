#include<iostream>
int main(){
    int t,n,i,j,flag,index,count,max;
    int weight[30],limit[30];
    std::cin>>t;
    while(t--){
               count=0;
               std::cin>>n;
               for(i=0;i<n;i++)
                      std::cin>>weight[i];         
               for(i=0;i<n;i++)                 
                      std::cin>>limit[i];                     
               for(j=0;j<n;j++){
                                flag=0;
                                max=101;
                                for(i=0;i<n;i++){
                                        if(limit[i]>=weight[j] && limit[i]<max){
                                                               index=i;
                                                               max=limit[i];
                                                               flag=1;                       
                                        }                          
                                }        
                                if(flag==1){
                                            count++;
                                            limit[index]=-1;                                   
                                }         
               }
               std::cout<<count<<'\n';
    }
    return 0;    
}
