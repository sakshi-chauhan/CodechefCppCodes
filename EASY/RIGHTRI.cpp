#include<iostream>
int main(){
    int t,x1,y1,x2,y2,x3,y3,cnt=0;
    std::cin>>t;
    while(t--){
               std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
               if(((y2-y1)*(y3-y2))==-((x2-x1)*(x3-x2)))
                  cnt++;
               else if(((y1-y2)*(y3-y1))==-((x1-x2)*(x3-x1)))
                    cnt++;
               else if (((y3-y1)*(y2-y3))==-((x3-x1)*(x2-x3)))
                    cnt++;               
    }
    std::cout<<cnt; 
    return 0;    
}
