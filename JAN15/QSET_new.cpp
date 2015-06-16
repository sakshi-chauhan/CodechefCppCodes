#include <iostream>
#include<numeric>
#include<vector>
#include<cstdio>
#include<cstring>
#include<cstdlib>

int main() {
	
	int N,M,X,Y,Q,i,j,k;
	int* arr;
	long long int count,nz,no,nt,ans;
	std::string A;
	int* res;
	
	
	std::cin>>N>>M;
	
	arr = (int*)malloc(N*sizeof(int));

	std::cin>>A;
	
	for(i = 0 ; i < N ; i++ ){
		
		arr[i] = A[i] - '0';
		
	}
	
	for(i = 0 ; i < M ; i++){
		
		count = 0;
		nz=no=nt=0;
		
		std::cin>>Q>>X>>Y;
		
		if( Q == 1 ){
			arr[X-1] = Y;
		}
		
		else{
			
			res = (int*)malloc((Y-X+1)*sizeof(int));
			std::partial_sum(arr+(X-1),arr+Y,res);
			
			for( j = 0 ; j <= Y-X ; j++ ){
				
				res[j] %= 3;
			
				if( res[j] == 0)
					nz++;
				else if( res[j] == 1){		
				
					count += no;
					
					no++;
				}
				else{
					
					count += nt;
					nt++;
					
				}
					
					
			}
			
			count += (nz*(nz+1))/2;
				std::cout<<count<<"\n";
			
			free(res);
			
		}
	
	}
	
	return 0;
	
}
