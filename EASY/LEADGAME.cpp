//The Lead game
#include<iostream>
//#include<stdlib.h>
int main(){
    int n,a,b,pos,winner,i=1,max=0;
    scanf("%d",&n);
    int (*arr)[3]=new int[n][3];
    arr[0][0]=arr[0][1]=0;
    while(n--){
             std::cin>>a;
             std::cin>>b;
             arr[i-1][0]+=a;
             arr[i-1][1]+=b;
             if(arr[i][0]>arr[i][1]){
                    arr[i][2]=arr[i][0]-arr[i][1];
                    pos=1;
             }
             else{
                    arr[i][2]=arr[i][1]-arr[i][0];
                    pos=2;       
             }
             if(arr[i][2]>max){
                            max=arr[i][2];
                            //pos=(arr[i][2]<0)?2:1;
                            winner=pos;
             }
             i++;  
             //std::cout<<'\n';  
    }    
    printf("%d %d",winner,max);
    return 0;
}
