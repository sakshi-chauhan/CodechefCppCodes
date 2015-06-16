#include<iostream>
#include<algorithm>
int Partition(int*,int,int);
void QuickSort(int *,int,int);
int main(){
    int t,n,weight[30],limit[30];
    int i,j,count;
    std::cin>>t;
    while(t--){
               count=0;
               std::cin>>n;
               for(i=0;i<n;i++)
                       std::cin>>weight[i];
               for(i=0;i<n;i++)
                       std::cin>>limit[i];   
               QuickSort(weight,0,n);
               QuickSort(limit,0,n);
               for(i=0,j=0;i<n&&j<n;i++){
                        while(j<n&&weight[i]>limit[j])
                              j++;                        
                        if(j++<n)
                               count++;                                                           
               } 
               std::cout<<count<<'\n';                           
    }
    return 0;    
}
int Partition(int *a, int beg, int end){         
    int p, pivot, loc;
    p=beg,pivot=a[beg];    
    for(loc=beg+1;loc<=end;loc++){
           if(pivot>a[loc]){
                            a[p]=a[loc];
                            a[loc]=a[p+1];
                            a[p+1]=pivot;
                            p=p+1;
           }
    }
           return p;
}

void QuickSort(int *a, int beg, int end){
    if(beg<end){
        int p=Partition(a,beg,end);                            
        QuickSort(a,beg,p-1);                            
        QuickSort(a,p+1,end);			              
    }
}

