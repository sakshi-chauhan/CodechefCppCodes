#include<iostream>
int main(){
    int a,n,k,j;
    int arr[101];
    //std::cin>>a>>n>>k;
    scanf("%d%d%d",&a,&n,&k);
    for(int i=0;i<101;i++)
          arr[i]=0; 
    for(int i=1;i<=a;i++){
            j=0;
            arr[j]++;
            if(arr[j]>n){
                arr[j]=0;
                j++;    
                arr[j]++;     
                while(arr[j]>n){
                    arr[j]=0;
                    j++; 
                    arr[j]++;           
                }         
            }           
    }       
    for(int i=0;i<k;i++)
            printf("%d ",arr[i]);
    printf("\n");       
    return 0;    
}
