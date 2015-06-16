#include<iostream>
int main(){
    int n,k,t;
    int count=0;
    scanf("%d %d",&n,&k);
    while(n--){
               scanf("%d",&t);
               if(t%k==0)
                         count++;            
    }
    printf("%d",count);
    return 0;    
}
