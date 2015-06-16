#include <iostream>
#include<numeric>
#include<vector>
#include<cstdio>
#include<cstring>

int main() {
	
	int N,M,X,Y,Q,i,j,k;
	int* arr;
	long long int count = 0;
	std::string A;
	//std::vector<int> res;
	int* res;
	std::cin>>N>>M;
	
	arr = (int*)malloc(N*sizeof(int));
	res = (int*)malloc(N*sizeof(int));
	
	//memset(res,-1,sizeof(res));
	
	std::cin>>A;
	
	for(i = 0 ; i < N ; i++ ){
		
		arr[i] = A[i] - '0';
		res[i] = -1;
		
	}
	
	for(i = 0 ; i < M ; i++){
		for(k = 0 ; k < N ; k++ )
		      res[k] = -1;
		count = 0;
		std::cin>>Q>>X>>Y;
		
		if( Q == 1 ){
			arr[X-1] = Y;
		}
		
		else{
			
			for(j = X-1 ; j < Y ; j++){
				
				std::partial_sum(arr+j,arr+Y,res);
				
				for(k = 0 ; res[k] != -1 ; k++){
					
					if( res[k] % 3 == 0 )
						count++;
					//std::cout<<res[k]<<"  ";	
				}
				//std::cout<<"\n";
				for(k = 0 ; k < N ; k++ )
					res[k] = -1;
			}
			
		
			std::cout<<count<<"\n";
		}
		//std::cout<<count<<"\n";
	}
	
	return 0;
	
}
