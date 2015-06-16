#include<iostream>
long long int absolute(long long int a){
     if(a<0)
            return -a;
     else
            return a;            
}
int main(){
    int t;
    long long int x,y;
    std::cin>>t;
    
    while(t--){
               std::cin>>x>>y;           
               //std::cout<<absolute(x)<<" "<<absolute(y);
               if(x ==0 && y==0)
                    std::cout<<"YES\n";
               
               else if(y == 0){
                    if(absolute(x)%2)     
                          std::cout<<"YES\n";
                    else
                          std::cout<<"NO\n";                      
               }
               
               else if(x == 0){
                    if(absolute(y)%2 == 0)     
                          std::cout<<"YES\n";
                    else
                          std::cout<<"NO\n";                  
               }
               
               else{
                    if(absolute(x)%2){
                            if(absolute(y) <= absolute(x)+1)        
                                 std::cout<<"YES\n";
                            else
                                std::cout<<"NO\n";
                    }     
                    else{
                            if(absolute(x) <= absolute(y))        
                                 std::cout<<"YES\n";
                            else
                                std::cout<<"NO\n";     
                    }
               }
    }
    return 0;    
}
