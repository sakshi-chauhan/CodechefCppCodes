#include<iostream>
#include<algorithm>

int main(){
    
    char str[50];
    
    gets(str);
    
    while( !strcmp(str,"#") ){
           
           if( std::next_permutation(str,str+strlen(str)))
               std::cout<<str<<'\n';    
           
           else
               std::cout<<"No Successor";
    }
    
    return 0;    
}
