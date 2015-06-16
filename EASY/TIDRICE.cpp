#include<iostream>
int main(){
    int t,n,score;
    std::string str;
    char vote;
    std::cin>>t;
    while(t--){
               std::cin>>t;
               score=0;
               std::cin>>str;
               std::cin>>vote;
               if(vote=='+')
                    score++;
               else
                    score--;
               for(int i=1;i<n;i++){
                       std::cin>>str;
                       if(str[str.length()-1]!=vote){
                             if(vote=='+')
                                score-=2;
                             else if(vote=='-')
                                score+=2;                                                      
                       }        
                       vote=str[str.length()-1];
               } 
               std::cout<<score<<'\n';                            
    }
    return 0;   
}
