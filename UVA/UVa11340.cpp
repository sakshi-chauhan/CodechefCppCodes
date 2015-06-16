#include<iostream>
#include<map>
#include<iomanip>
#include<cstdio>

int main(){
    
    int n,k,m,b;
    char a;
    std::string str;
    std::map<char,int> mymap;
    double res;
    std::map<char,int>::iterator it;
    
        
    std::cin>>n;
    
    while( n-- ){
           
           res = 0;
           std::cin>>k;
           
           while(k--){
               std::cin>>a>>b;  
               mymap.insert(std::pair<char,int>(a,b));                
           }
           // = mymap.begin();
           //std::cout<<it->first;
           
           
           std::cin>>m;
           getchar();
           while(m--){
               getline(std::cin , str);
               std::cout<<str;
               
               for( int i = 0 ; i <str.size() ; i++ ){
                    
                        if( mymap.find(str[i]) == mymap.end() )
                            res += 0;
                        
                        else{
                             
                             it = mymap.find(str[i]);     
                             res += it->second;
                        }     
                    
               }
               
           }
           
           res /= 100;
           std::cout<<std::setprecision(2)<<std::fixed<<res<<"$\n";
           
    }
    
    return 0;
        
}
