#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<iomanip>
struct point{int x,y;};
int compare(const void *a,const void*b){
     point *i1, *i2;
     i1=(point*)a;
     i2=(point*)b;
     if(i1->x>i2->x)
         return 1;
     if(i1->x==i2->x && i1->y<i2->y)
         return 1;
     return 0;    
}
int main(){
    int t,n;
    double dist;
    point a[100005];
    std::cin>>t;
    while(t--){
               std::cin>>n;
               dist=0;
               for(int i=0;i<n;i++)
                       std::cin>>a[i].x>>a[i].y;
               qsort(a,n,sizeof(point),compare);
               for(int i=1;i<n;i++){
                   dist+=sqrt(pow(a[i].x-a[i-1].x,2)+pow(a[i].y-a[i-1].y,2));            
               }                   
               std::cout<<std::setprecision(2)<<std::fixed<<dist<<'\n';
    }    
    return 0;
}
