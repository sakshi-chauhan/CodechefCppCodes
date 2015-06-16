#include<iostream>
void swap(long long &a,long long &b){
     a=a+b;
     b=b-a;
     a=a-b;     
}
int main(){
    int t,n,i;
    long long a[600002];
    std::cin>>t;
    while(t--){
               std::cin>>n; 
               std::cin>>a[0];          
               for(i=1;i<n;i++){
                    std::cin>>a[i]; 
                    if(i%2){
                            if(a[i-1]>a[i])       
                               swap(a[i-1],a[i]);             
                    }                            
                    else{
                            if(a[i-1]<a[i])       
                               swap(a[i-1],a[i]);                           
                    }
                    std::cout<<a[i-1]<<" ";
               }
               std::cout<<a[i]<<'\n';
    }
    return 0;    
}
