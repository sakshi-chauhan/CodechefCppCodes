#include<iostream>
bool isprime(int n){
     bool flag=1;
     for(int i=2;i<=(n/2);i++){     
             if(n%i==0){
                       flag=0;
                       break;
             } 
     }         
     return flag==1;                  
}
bool ispalin(int n){
     int rev=0;     
     for(int i=n%10;i>0;i/=10){
             rev=rev*10+i;        
     }
     return rev==n;
}
int main(){
    int n;
    std::cin>>n;
    while(1){
             if(isprime(n)&&ispalin(n)){
                      std::cout<<n;
                      break;
             }
             n++;
    }
    return 0;    
}
