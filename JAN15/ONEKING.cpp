#include <iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>

#define rep(i,N) for(i = 0 ; i < N ; i++)
#define gc getchar_unlocked
#define pc putchar_unlocked
 
int scan(){
	int n=0;
	char ch;
	ch=gc();
	while(ch<'0' || ch >'9')
		ch=gc();
	while(ch>='0' && ch<='9'){
		n=n*10+ch-'0';
		ch=gc();
	}
		return n;
}

int print(int n){
	int i=0;
	char ch[6]={-1};
	while(n>0){
		ch[i++]='0'+n%10;
		n=n/10;
	}
	while(i-->0){
		pc(ch[i]);
	}
	pc('\n');
}
bool cmp(std::pair<int,int> p1 , std::pair<int, int> p2){
	
	return p1.second < p2.second;	
	
}

int main() {
	// your code goes here
	int T,N,a,b,i,j,bomb;
    std::vector< std::pair<int,int> > vii;
    
    //std::cin>>T;
    T = scan();
    
    while( T-- ){
    	
    	//std::cin>>N;
    	N = scan();
    	
    	bomb = 0;
    	
    	rep(i,N){
    		
    		//std::cin>>a>>b;
    		a = scan();
    		b = scan();
    		vii.push_back(std::pair<int,int>(a,b));
    		
    	}
    	
    	std::sort(vii.begin(),vii.end(),cmp);
    		
    	std::vector< std::pair<int,int> >::iterator it;
    	
    	/*for( it = vii.begin(); it != vii.end() ; it++ )
    		std::cout<<it->first<<" "<<it->second<<"\n";
    	*/
    	
    	while( !vii.empty() ){
    		bomb++;
    		//for( it = vii.begin(); it != vii.end() ; it++ )
    			//std::cout<<it->first<<" "<<it->second<<"\n";
    		for( i = 1 ; i < vii.size() ; i++ ){
    			
    				if( vii[i].first != -1 ){
    					
    					if( vii[i].first <= vii[0].second )
    						vii[i].first = -1;
    					
    				}
    			
    		}
    		
    		
    		
    		for( i = vii.size()-1 ; i >= 0 ; i-- ){
    			
    			if( vii[i].first == -1 )
    				vii.erase(vii.begin()+i);
    				
    		}
    		vii.erase(vii.begin());
    	}
    	
    	//std::cout<<bomb<<"\n";
    	print(bomb);
    	vii.erase(vii.begin(),vii.end());
    }       
	
	
	
	return 0;
}
