#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<cstdio>

int main(){
    
    int t,count = 0;
    std::string line1,line2;
    int index;
    std::string value;
    std::vector< std::pair<int , std::string> > arr ;
    
    std::cin>>t;
    
    while( t-- ){
           
           getchar();
           count++; 
           
           getline(std::cin , line1);   
           getline(std::cin , line2);   
           
           std::stringstream ss1(line1), ss2(line2);
           
           while( ss1 >> index ){
                  
                 ss2>>value;
                 arr.push_back(std::pair<int,std::string>(index,value));
                         
           }
           
            std::sort(arr.begin(), arr.end());
            if ( count > 1 ) {
                std::cout<<'\n';
            }
           
            for ( int i = 0 ; i < arr.size() ; i++ ) {
                std::cout<<arr[i].second<<'\n';
            } 
            
            arr.clear();
    }
    
    return 0;
        
}
