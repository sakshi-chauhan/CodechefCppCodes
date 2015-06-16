#include<iostream>
#include<cmath>

int main(){
    int t,num;
    std::string str;
    int MOD = 1000000007;
    std::cin>>t;
    
    while(t--){
               std::cin>>str;           
               num=1;
               for( int i=1; i<=str.length(); i++ ){
                    if( i%2 ){
                        if( str[i-1] == 'l' ){
                            num%=MOD;
                            num*=2;
                            num%=MOD;
                        }
                        
                        else{
                             num%=MOD;
                            num*=2;        
                            num%=MOD;
                            num+=2;
                            num%=MOD;
                        }
                    }    
                     
                    else{
                        if( str[i-1] == 'l' ){
                            num%=MOD;
                            num*=2;
                            num%=MOD;
                            num-=1;
                            num%=MOD;
                        }
                        
                        else{
                             num%=MOD;
                            num*=2;
                            num%=MOD;
                            num+=1;      
                            num%=MOD;
                        }
                    }
               }
               std::cout<<num<<'\n';
    }
    return 0;    
}
