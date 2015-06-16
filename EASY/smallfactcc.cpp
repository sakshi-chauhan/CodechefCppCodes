#include<iostream>
int main(){
    int T;
    int n;
    int m,temp;
    char arr[200];
    std::cin>>T;
    while(T--){
                std::cin>>n;
                m=0,temp=0;
                arr[0]=1;
                for(int i=1;i<=n;i++){
                        for(int j=0;j<=m;j++){
                             temp+=i*arr[j];                   
                             arr[j]=temp%10;
                             temp/=10;
                        }
                        while(temp>0){
                             arr[++m]=temp%10;
                             temp/=10;          
                        }
                }
                for(int k=m;k>=0;k--)
                        std::cout<<(int)arr[k];  
    }
}
