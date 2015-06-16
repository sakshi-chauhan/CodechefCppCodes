#include<iostream>
#include<cstring>
int main(){
        char s[1000000];
        int t,c;   
		std::cin>>t;
		while(t--){
				std::cin>>s;
				c = 0;
				for(int i=0;i<strlen(s);i++)
						if (s[i] != '4' && s[i] != '7')
								c++;
				std::cout<<c<<'\n';
		}		
		return 0;
} 
