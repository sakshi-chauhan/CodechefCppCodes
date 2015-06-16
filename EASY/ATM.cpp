#include<iostream>
#include<iomanip>
int main(){
    std::cout<<std::setprecision(2)<<std::fixed;
    int x;
    float y;
    std::cin>>x;
    std::cout<<"\n";
    std::cin>>y;
    if(x%5!=0){
//               std::cout<<y;           
                  printf("\n%.2f",y);
    }
    else{
         if(x>y){
                 printf("\n%.2f",y);         
         }     
         else{
                 float balance=y-x-0.5;
                 printf("\n%.2f",balance);  
         }
    }
    return 0;    
}
