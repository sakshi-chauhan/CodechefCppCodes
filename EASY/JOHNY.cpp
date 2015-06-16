#include<iostream>
#include<algorithm>
int binary_search(int array[],int first,int last, int search_key){
    int mid=(first + last)/2;
         
    if(search_key==array[mid])
        return mid;
    else{
        if (search_key<array[mid])
                return binary_search(array,first,mid-1,search_key);
        else
                return binary_search(array,mid+1,last,search_key);
    }
}
int main(){
    int t,n,k,uncle_johny;
    int a[102];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               for(int i=0;i<n;i++) 
                       std::cin>>a[i];
               std::cin>>k;
               uncle_johny=a[k-1];
               std::stable_sort(a,a+n); 
               //for(int i=0;i<n;i++)
                 //      std::cout<<a[i];  
               int res=binary_search(a,0,n-1,uncle_johny)+1;
               std::cout<<res<<'\n';             
    }
    return 0;
}
