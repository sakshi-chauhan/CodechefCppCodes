#include<stdio.h>
#include<string.h>

int main(){
    
    int T;
    int arr[26];
    char str[51];
    bool flag;
    
    scanf("%d",&T);
    
    while( T-- ){
           
           for( int i = 0 ; i < 26 ; i++ )
                arr[i] = 0;
                
           flag = 0;
                
           scanf("%s",str);       
           
           if( !(strlen(str)%2) ){
               for( int i = 0 ; i < strlen(str) ; i++ )
                    arr[ str[i] - 'a' ]++;
                
               for( int i = 0 ; i < 26 ; i++ ){
                    if( arr[i] == strlen(str)/2 ){
                        flag = 1;
                        break; 
                    }
               }
           }
           
           if( flag )
               printf("YES\n");
           else
               printf("NO\n");    
    }
    
    return 0;
        
}
