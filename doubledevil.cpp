#include<iostream>
#include<cstdlib>
#include<cmath>

bool is_int( float k ){
     return k == (float)(int)k;     
}

int main(){
    
    std::string str;
    long long num;
    float root;
    int d,i;
    
    str = "6 6 6 0 0 6 6 6 0 0";
    while(1){
             for( i=1 ; i<=17 ; i+=2 )
                  str[i] = rand()%10 + '0';
             //std::cout<<"Randomly generated string = "<<str;
             num=0;i=0;              
             while( i<=18 ){
                    num*=10;
                    d=str[i] - '0';
                    num+=d;
                    i++;       
             }
             root=sqrt(num);
             
             if( is_int( root ) ){
                 std::cout<<root;
                 break;
             }
                             
             //std::cout<<"\nNumber = "<<num;
    }    
    return 0;    
    
}
