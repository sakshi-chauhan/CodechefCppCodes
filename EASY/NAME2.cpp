#include<iostream>
bool sub(std::string A,std::string B){
    int j=0;
    for(int i=0;i<A.length();i++){
        while(j<B.length()){
            if (B[j]==A[i])
                break;
            j++;
        }
        if(j>=B.length())
            return false;
        j++;
    }
return true; 
}
int main(){
    int t;
    std::string A,B;
    std::cin>>t;
    while(t--){
               std::cin>>A>>B;
               if(A.length()<B.length()){
                   if(sub(A,B))
                      std::cout<<"YES\n";
                   else
                      std::cout<<"NO\n";      
               }
               else{
                   if(sub(B,A))
                      std::cout<<"YES\n";
                   else
                      std::cout<<"NO\n";             
               }
    }
    return 0;    
}
