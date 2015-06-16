#include<iostream>
#include<vector>
#include<map>

int main(){
    
    int T,N;
    std::map<std::string,int> vec;
    std::map<std::string,int>::iterator it;
    std::string str;
    bool flag;
    
    std::cin>>T;
    
    while( T-- ){
           
           std::cin>>N;
           
           for( int i = 0 ; i < N ; i++ ){
                std::cin>>str;
                vec.insert(std::pair<std::string,int>(str,1));       
           }
           
           std::cin>>str;
           it = vec.find(str);
           
           
           if( it != vec.end() )         
               std::cout<<"yes\n";
           else
               std::cout<<"no\n";
           
           vec.erase( vec.begin() , vec.end() );        
    }
    
    return 0;
        
}
