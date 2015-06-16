#include <iostream>
#include<vector>

int main(){
	
	int T,K,a;
	long long int N,res,max,i;
	std::vector<int> vi;
	
	//std::vector<int>::iterator it;
	
	std::cin>>T;
	
	while( T-- ){
		
		std::cin>>N>>K;
		
		if( K == 0 ){
			
			res = (N*(N+1))/2;
			
			if( res % 2 )
				std::cout<<"Mom\n";
			
			else
				std::cout<<"Chef\n";
			
		}
		
		else{
			
		
			for( i = 1 ; i <= N ; i++ )
				vi.push_back(i);
			
			/*for( i = 0 ; i < N ; i++ )
				std::cout<<vi[i]<<"  ";
			std::cout<<'\n';	*/
				
			for( i = 0 ; i < K ; i++ ){
				
				std::cin>>a;
				a--;
				//vi.erase(vi.begin()+a);
				vi[a] = -1;
				//std::cout<<"vi["<<a<<"]="<<vi[a]<<"  ";
			}
			
			//std::cout<<'\n';
			for( i = N-1 ; i >= 0 ; i-- ){
				
				if( vi[i] == -1)
					vi.erase(vi.begin()+i);
				
			}
			
			/*for( i = 0 ; i < vi.size() ; i++ )
				std::cout<<vi[i]<<"  ";*/
				
			max = 0;
			
			for( i = 0 ; i < vi.size() ; i++ ){
				
				if( vi[i] <= max+1 )
					max += vi[i];
				else
					break;
			}
			
			//std::cout<<max+1<<'\n';	
			if( max % 2 )
				std::cout<<"Mom\n";
			else
				std::cout<<"Chef\n";
		}
		
		vi.erase(vi.begin(),vi.end());
	}
	return 0;	
}
