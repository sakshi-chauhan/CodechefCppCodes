#include<stdio.h>
int main(){
    int t,n,q,a,x,y,m,count,oy,ox;
    unsigned long long s[10008];
    int dish[10008];
    int owner[10008];
    scanf("%d",&t);
    while(t--){
               scanf("%d",&n);
               for(int i=1;i<=n;i++){
                       scanf("%llu",&s[i]);
                       dish[i]=1;  
                       owner[i]=i;
               }
               scanf("%d",&q);
               for(int i=0;i<q;i++){
                       
                       scanf("%d %d",&a,&x);
                       if(a==0){
                          
	                         scanf("%d",&y);
	                         if(owner[x]==owner[y])
	                            
	                         	printf("Invalid query!\n");
	                         	
	                         else if(s[owner[x]]>s[owner[y]]){
	                           
	                            count=1;
	                            
	                            oy=owner[y];
	                          	ox=owner[x];
	                          	
	                          	owner[y]=ox;
		                        dish[ox]+=dish[oy];    
		                        for(int j=1;count<dish[oy];j++){
		                         		if(owner[j]==oy){
		                         			count++;
		                         			owner[j]=ox;
		                         		}
		                         		
		                         }
	                         }
	                         else if(s[owner[x]]<s[owner[y]]){
	                            
	                            count=1;
	                            
	                            ox=owner[x];
	                            oy=owner[y];
	                            
	                            owner[x]=oy;
	                            dish[oy]+=dish[ox];
	                            
	                         	for(int j=1;count<dish[ox];j++){
	                         		if(owner[j]==ox){
	                         			count++;
	                         			owner[j]=oy;
	                         		}
	                         	}
	                        }
                       } 	
               		
               			else{
                               
                            printf("%d\n",owner[x]);
               			}
                        
               }        
               			
    }
    return 0;    
}
