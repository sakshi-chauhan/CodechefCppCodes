#include<iostream>
#include<algorithm>

int main(){
    
    int n,count = 0;
    long long length[2010];
    std::cin>>n;
    
    while( n ){
           count = 0;
           for( int i=0 ; i<n ; i++ )       
                std::cin>>length[i];
           
           std::sort( length , length + n );
           
           for( int i = n-1; i >= 2 ; i-- ){
        		int l = 0;
        		int r = i - 1;
        		
        		while(l<r){
        			
                    if( length[l] + length[r] < length[i]){
        				count += r-l;
        				l++;
        			}
        			
        			else
        				r--;
        				
        		}
        
        	}
           std::cout<<count<<'\n';
           std::cin>>n;       
    }
    
    return 0;
        
}
