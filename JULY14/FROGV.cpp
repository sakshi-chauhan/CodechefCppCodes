//#include<iostream>
#include<stdio.h>
#include<algorithm>
 
unsigned long long binary_search(unsigned long long array[],int first,int last, unsigned long long search_key){
    unsigned long long index;
    if (first > last)
       index = -1;
    else{
         int mid = (first + last)/2;
         if (search_key == array[mid])
            index = mid;
         else
             if (search_key < array[mid])
                index = binary_search(array,first, mid-1, search_key);
             else
                 index = binary_search(array, mid+1, last, search_key);
     } 
     return index;
}
 
int main(){
    unsigned long long n,k,p,a,b,s,l,i,j;
    unsigned long long A[100100],B[100100];
    int flag;
    //std::cin>>n>>k>>p;
    scanf("%llu %llu %llu",&n,&k,&p);
    for(i=0;i<n;i++){
            scanf("%llu",&A[i]);
            B[i]=A[i];
    }
    std::sort(B,B+n);
    for(i=0;i<p;i++){
    	    
    		flag=0;
            //std::cin>>a>>b;
            scanf("%llu %llu",&a,&b);
            
            if(abs(A[a-1]-A[b-1])<=k){
                  //std::cout<<"Yes\n";
                  printf("Yes\n");
            }
            else{
            	  
            	  if(A[b-1]>A[a-1]){
            	     l=A[b-1];
            		 s=A[a-1];	   
            	  }
            	  else{
            	     l=A[a-1];
            	  	 s=A[b-1];		
            	  } 
            	  unsigned long long h = binary_search(B,0,n-1,s);
                  unsigned long long m = binary_search(B,0,n-1,l);
                  for(j=m;j>h;j--){
                          if(abs(B[j]-B[j-1])>k){
                                flag=1;
                                break;                       
                          }
                  } 
                  if(flag==1)
                     printf("No\n");
                  else
                     printf("Yes\n");
                    
            } 
                                   
    }        
    return 0;    
}
