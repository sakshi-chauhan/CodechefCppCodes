#include<iostream>

using namespace std;

int min( int a , int b ){
    
    return (a<b)?a:b;
        
}

int main(){
    
    int T,count1,count2;
    string str,str1,str2;
    
    cin>>T;
    
    while( T-- ){
           
           cin>>str;
           
           count1 = 0;
           count2 = 0;
           
           if( str.length() == 1 ){
               cout<<"0\n";
               continue;       
           }
           
           for( int i = 0 ; i < str.length(); i++ ){
                
                if( i%2 )
                    str1[i] = '-';
                      
                else
                    str1[i] = '+';
                    
           }
          
           
           for( int i = 0 ; i <str.length(); i++ ){
                
                if( str[i] != str1[i] )
                    count1++;     
               
           }
           
           for( int i = 0 ; i < str.length(); i++ ){
                
                if( i%2 )
                    str1[i] = '+';
                     
                else
                    str1[i] = '-';
           }
           for( int i = 0 ; i <str.length(); i++ ){
                
                if( str[i] != str1[i] )
                    count2++;     
                
           }
           cout<<min(count1,count2)<<"\n";
    }
    
    return 0;    
}
