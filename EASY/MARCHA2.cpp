#include<iostream>

int main(){
    
    int t,k,leaves;
    
    std::cin>>t;
    
    while( t-- ){
		int flag = 0, stem = 1; 
		
		std::cin>>k;
		
		while( k-- ){
               
			std::cin>>leaves; 
			
            if (leaves > stem){
				flag = 1;
				break;
			}
			
			stem = (stem - leaves) * 2; 
		}
		if (flag || stem)
		  printf ("No\n");
		else
		  printf ("Yes\n");
	}
    
    return 0;
        
}
