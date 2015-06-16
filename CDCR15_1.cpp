#include<iostream>
#include<cstring>
using namespace std;
int main(){
    
    int T,N,K,i;
    char* str1;
    char* str2;
    
    cin>>T;
    
    while( T-- ){
           
           cin>>N>>K;
           
           str1 = new char[N];      
           str2 = new char[K];
           
           cin>>str1;
           
           for( i = 0 ; i < K ; i++ )
                str2[i] = '#';
           str2[i] = '\0';
                
           if ( strstr(str1,str2) ) {
                cout <<"NO\n";
           }
           else
               cout<<"YES\n";
           
    }
    
    return 0;    
}
