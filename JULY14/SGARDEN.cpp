#include<iostream>
#include<cmath>
#include<cstring>
#define MOD (int)pow(10,9)+7

bool same(int *a,int *b,int n){
     for(int i=0;i<n;i++){
             if(a[i]!=b[i])        
                  return 0;                 
     }
     return 0;
}

int main(){
    int t,n,count;
    int actual[100005],step[100005],str[100005];
    std::cin>>t;
    while(t--){
               std::cin>>n;           
               count=1;
               for(int i=0;i<n;i++){
                       actual[i]=i+1;
                       //str[i]=(i+1);   
                       //std::cout<<"actual["<<i<<"]="<<(int)actual[i]<<" ";
                       //std::cout<<"str["<<i<<"]="<<actual[i]<<'\n'; 
                       //actual[i]=actual[i]-'0';
                      // std::cout<<"actual["<<i<<"]="<<actual[i]<<" ";    
               }
               for(int i=0;i<n;i++){
                       std::cin>>step[i];        
                       //std::cout<<"step["<<i<<"]="<<step[i]<<'\n';
               }
                       
              /* for(int i=0;i<n;i++){
                       std::cout<<(int)actual[i]<<" ";
                       std::cout<<step[i];        
               }*/
                       
               //strcpy(str,step); 
               if((same(actual,step)));
               
               else{
                    //std::cout<<"else me hooonnnnnn";
                    memset(str,0,sizeof(str));     
                   while(!same(actual,str)){                      
                          for(int i=0;i<n;i++){
                                  int m=step[i]-1;
                                  //std::cout<<"m = "<<m<<" ";
                                  int n=actual[i];
                                  //std::cout<<"n = "<<n<<" ";
                                  str[m]=n;
                                  //std::cout<<str[step[i]-1-'0']<<" ";
                                  //std::cout<<"str["<<m<<"] = "<<str[m]<<" ";
                          }
                          count++;  
                         // strcpy(step,str);                                               
                         for(int j=0;j<n;j++)
                             step[j]=str[j];
                   //}
               }
               count%=MOD;
               std::cout<<count<<'\n';*/
    }
    return 0;    
}
