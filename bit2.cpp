#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

bool cmp( std::pair<long long int , long long int> par1,  std::pair<long long int , long long int> par2 ){
     
     if( par1.first != par2.first )
         return par1.first < par2.first;
     
     if( par1.second != par2.second )
         return par1.second < par2.second;
      
     return false;        
     
}

int main(){
    
    int n,t;
    long long int a , b,val1,val2;
    int count;
    //bool (*fn_pt)(long long , long long) = cmp;
    //std::map<long long int , long long int> mymap;
    
    std::vector<std::pair<long long , long long> > vec;
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n;
           count=0;
           
           for( int i = 0 ; i < n ; i++ ){
                
                std::cin>>a>>b;
                vec.push_back(std::pair<long long,long long>(a,b));     
                
           }
           
           std::sort(vec.begin(),vec.end(),cmp);
           
           std::vector<std::pair<long long , long long> >::iterator it;
           
           it = vec.begin();
           val1 = it->first;
           val2 = it->second;
           
           count++;
           std::cout<<val1<<" "<<val2<<" "<<count<<'\n';
           for( it = vec.begin()+1 ; it!= vec.end() ; it++ ){
                
           //std::cout<<"whaatttt?";
               if( val1 != it->first && val2 < it->first ){
                   count++;
                   val1 = it->first;
                   val2 = it->second; 
                   std::cout<<val1<<" "<<val2<<" "<<count<<'\n';   
               }
                   
           }
           
           std::cout<<count<<'\n';
           
           vec.erase(vec.begin(),vec.end());
}
    
    return 0;
        
}
