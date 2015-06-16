#include<iostream>
#include<cstring>
#include<algorithm>
int main(){
    int t,n,m,i,j,k,l,sum;
    int p[105],c[105][105];
    std::cin>>t;
    while(t--){
               sum=0;
               memset(c, 0, sizeof(c[0][0]) * 105 * 105);
               std::cin>>n>>m;
               for(i=0;i<m;i++)
                   std::cin>>p[i];
               for(i=0;i<n;i++){
                   std::cin>>c[i][0];
                   for(j=1;j<=c[i][0];j++)
                      std::cin>>c[i][j]; 
                   std::stable_sort(c[i]+1,c[i]+c[i][0]);   
               }   
               for(i=0;i<m;i++){
               	k=p[i];
               	l=c[k][0];
               	if(c[k][l]>0){
	                  sum+=c[k][l];
	                  c[k][l]=0;
	                  --c[k][0];  
               	}
               }            
               std::cout<<sum<<'\n';
    }
    return 0;    
}
