#include<iostream>
int main(){
    int t,k,flag;
    int a[10];    
    std::cin>>t;
    while(t--){
               flag=0;
             for(int i=0;i<10;i++)
                     std::cin>>a[i];
             for(int i=0;i<10;i++){
                     if(flag==0){
                         for(int j=0;j<10;j++){
                             if(a[j]==i&&j!=0){
                                      k=i+1;
                                      while(k--)
                                            std::cout<<j;
                                      std::cout<<'\n';     
                                      flag=1;  
                                      break; 
                             }    
                         }        
                         if(flag==0&&a[0]==i){
                                 std::cout<<"1";
                                  k=i+1;
                                      while(k--)
                                            std::cout<<"0";
                                      std::cout<<'\n';      
                                  flag=1;
                                  break;                                            
                         }  
                     }            
             }          
    }
    return 0;
}
