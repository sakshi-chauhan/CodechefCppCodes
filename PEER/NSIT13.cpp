#include<iostream>
#include<algorithm>
int main(){
    int n,i,j,t=10,count;
    int values[10];
    while( t-- ){
               count = 0;
               for( i = 0 ; i<10 ; i++ ){
                    std::cin>>values[i];
                    values[i]%=42;     
               } 
               std::sort(values, values+10);
               for( i = 0 ; i<10 ; ){
                     j=i+1;
                     while(values[j] == values[i]){
                                     j++;               
                     }     
                     i=j;
                     count++;
               }  
               std::cout<<count<<'\n';        
    }    
    return 0;
}
