#include <iostream>
#include <cstring>
int main(){
    int T, N;
    std::string turn[100], road[100];
	std::cin>>T;
	while(T--){
		std::string line;
		std::cin>>N;
		getline(std::cin, line);
		for(int i=0; i<N; i++){
			std::cin>>turn[i];
			getline(std::cin, road[i]);
		}
		for(int i=0; i<N; i++){
			if(i==0)
				std::cout<<"Begin";
			else if(turn[N-i]=="Left")
				std::cout<<"Right";
			else
				std::cout<<"Left";
			std::cout<<road[N-1-i]<<'\n';
		}
		std::cout<<'\n';
	}
	return 0;
}
