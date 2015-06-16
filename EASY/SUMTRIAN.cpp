#include<iostream>
int main(){
    int t;
    int n;
    int i,j;
    int arr[100][100];
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);           
               for(i=0;i<n;i++){
                       for(j=0;j<=i;j++){
                               scanf("%d",&arr[i][j]);        
                       }        
               }
               for(i=n-2;i>=0;i--)
                   for(j=0;j<=i;j++){
        				if(arr[i+1][j]>arr[i+1][j+1])
        					arr[i][j]+=arr[i+1][j];
        				else
        					arr[i][j]+=arr[i+1][j+1];
			       }
		        printf("%d\n",arr[0][0]);
		}
	return 0; 
}    
