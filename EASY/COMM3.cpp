#include<iostream>
#include<cmath>
int main(){
    int t,r,x1,y1,x2,y2,x3,y3,count;
    float dist;
    std::cin>>t;
    while(t--){
               count=0;
               std::cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
               if(sqrt(pow(x1-x2,2)+pow(y1-y2,2))<=r)
                        count++;
               if(sqrt(pow(x3-x2,2)+pow(y3-y2,2))<=r)
                        count++;
               if(sqrt(pow(x1-x3,2)+pow(y1-y3,2))<=r)
                        count++;                                                                          
               if(count>1)
                          std::cout<<"yes\n";
               else
                          std::cout<<"no\n";           
    }
    return 0;    
}
