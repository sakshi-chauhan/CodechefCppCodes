#include<iostream>
#include<stdio.h>
int main(){
    int t,i,j,count,day;
    bool a[1000000];
    std::string p;
    //std::cin>>t;
    scanf("%d",&t);
    while(t--){
               //std::cin>>p; 
               scanf("%d",&t);
               //count=0;
               day=0;
               for(i=0;i<1000000;i++)
                   a[i]=0;
               for(i=0;i<p.length();i++){
                      count=0;                   
                      if(p[i]=='.'){
                           //count=1; 
                           //day++;        
                           for(j=i+1;j<p.length();j++){
                               if(p[j]=='.')
                                  count++;
                               else
                                  break; 
                               i=j+1;                                 
                           }
                           if(a[count]!=1) {  
                                //std::cout<<"a["<<count<<"]!=1";                        
                                for(j=count;j>=0;j--){ 
                                    if(a[j]!=1)                   
                                          a[j]=1;
                                    else
                                          break;      
                                }
                                day++;
                            }                  
                      }   
               }  
               //std::cout<<day<<'\n';        
               printf("%d\n",day);
    }
    return 0;    
}
