#include<iostream>
int main(){
    int t,n,max,pos;   
    int a[102];
    int b[102];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               for(int i=0;i<n;i++){
                       std::cin>>a[i];
                       b[i]=1;
               }        
               for(int i=0;i<n-1;i++){
                       for(int j=i+1;j<n;j++){
                               if(a[i]==a[j] && a[j]!='\0'){
                                    b[i]++;
                                    a[j]='\0';
                                    b[j]='\0';          
                               }        
                       }        
               } 
              /* for(int i=0;i<n;i++){
                       std::cout<<b[i];
               }    */
               max=b[0];
               pos=0;
               for(int i=1;i<n;i++){
                       if(b[i]>=max && b[i]!='\0'){
                                    if(b[i]==max){
                                         if(a[i]<a[pos]){
                                              max=b[i];          
                                              pos=i; 
                                         }                 
                                    } 
                                    else{              
                                        max=b[i];
                                        pos=i;             
                                    }
                       }        
               } 
               std::cout<<a[pos]<<" "<<max<<'\n';       
    } 
    return 0;
}
