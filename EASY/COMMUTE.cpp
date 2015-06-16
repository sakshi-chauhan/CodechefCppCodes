#include<iostream>
int main(){
    int t,n,x,l,f,arrival;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               for(int i=0;i<n;i++){
                       std::cin>>x>>l>>f;
                       if(i==0)
                          arrival=x+l;
                       else{
                            if(arrival<=x){
                               arrival=x;
                               arrival+=l;        
                            }
                            else{
                                 while(arrival>x)
                                    x+=f;
                                 arrival=x;
                                 arrival+=l;        
                            }
                       }           
               }           
               std::cout<<arrival<<'\n';
    }
    return 0;    
}
