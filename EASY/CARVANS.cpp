#include<iostream>
int main(){
    int t,n,speed_prev,speed_next,count;
    std::cin>>t;
    while(t--){
               std::cin>>n;
               count=1;
               std::cin>>speed_prev;
               for(int i=1;i<n;i++){
                       std::cin>>speed_next;
                       if(speed_next<speed_prev){
                          count++;
                          speed_prev=speed_next;
                       }
               }
               std::cout<<count<<'\n';
    }
    return 0;
}
