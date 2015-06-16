#include<iostream>
#include<vector>

int min(int a , int b){

	return (a<b) ? a : b;
	
}


void readpath(std::vector<int> C[] , int N){
     
     int u,v;
     
     for( int i = 1 ; i < N ; i++ ){
          
          std::cin>>u>>v;
          if( C[u][0] == -1 )
          	C[u].pop_back();
          
          if( C[v][0] == -1 )
          	C[v].pop_back();	
          	
          C[u].push_back(v);
          C[v].push_back(u);
             
     }     
     
}

void findepth(std::vector<int>C[] , int * D, int N , int B){
	
	
	for(int i = 1 ; i <= N ; i++ ){
		
		D[i] = 1000;	
		
	}
	
	D[B] = 0;
	
	for( int i = 0 ; i < C[B].size() ; i++ ){
		
		D[ C[B][i] ]= 1;
		
	}
	
	for( int i = 0 ; i < C[B].size() ; i++ ){
		
		int c = C[B][i];
		
		if(C[c][0] != -1){
		
			for( int j = 0 ; j <= C[c].size()-1 ; j++ ){
	 
					D[C[c][j]] = min( D[C[c][j]] , D[c] + 1 ); 
			
			}	
		}
		
	}
	
	for( int i = 1 ; i <= N ; i++ ){
		
		if( D[i] == 1000 ){
			
			for( int j = 0 ; j <= C[D[i]].size()-1 ; j++ ){
				
				D[i] = min( D[i] , D[C[i][j]]+1 );
			}
		}
	}

}


int searchpath(int A , int j , int * D, std::vector<int> C[],int minm, int clr) {

	int flag = 0;
	//std::cout<<"Func called"<<A<<" to "<<j<<'\n';
	
	if( A == j ) {
		
		return minm;
	
	}
	
	for(int i = 0 ; i <= C[A].size()-1 ; i++ ){
		
		//minm = D[C[A][i]];
		
		if( C[A][i] != clr ){
			
			minm = min (minm , D[C[A][i]]);
		
			if( searchpath( C[A][i] , j , D , C ,minm , A) > 0)
			{
				flag = 1;
				return minm;
			}
			
		}
		
	}

	return flag;
}

int main(){
    
    int N,K,B,Q,A,P;
    int F[105];
    int mini = 1000;
    int ret,city,m;
    
    std::cin>>N>>K;
    std::cin>>B;
    
    std::vector<int> C[N+5];
    int D[105];
    
    for( int i = 1 ; i <= N ; i++ ){
          
          C[i].push_back(-1);
               
     }  
     
    
    readpath(C,N);
    findepth(C,D,N,B);
    
    for( int i = 1 ; i <= N ; i++ )
         std::cin>>F[i];
    
    std::cin>>Q;
    
    for( int i = 0 ; i < Q ; i++ ){
         
         std::cin>>A>>P;
         city = 100000 ; 
         m = 0 ;
         
         mini = D[C[A][0]];
         
         for(int j = 1 ; j <= N ; j++ ){
  	
         	if( F[j] == P ){

         		ret = searchpath(A,j,D,C,mini,-1);
         		
         		if( ret >= m ){
         		
         			if( ret == m ){
         			    if( j < city )
         					city = j;
         			}
         			else{
         				
         				m = ret;
         				city = j;
         			}
         		}
         	}
         }
         
         std::cout<<city<<'\n';
         
    }
 
    return 0;
        
}
