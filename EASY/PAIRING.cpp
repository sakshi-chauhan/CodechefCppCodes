#include <iostream>
int main() {
      int t,n,m,i;
      int a[10005],b[10005],c[1005],d[10005];
      std::cin>>t;     
      while(t--) {
      for(i=0;i<10005;i++)
              a[i]=b[i]=d[i]=0;
      for(i=0;i<1005;i++)
              c[i]=0;
      std::cin>>n>>m;
      for(i=0;i<m;i++)
               std::cin>>a[i]>>b[i];
      for(i=m-1;i>=0;i--)
                 if(c[a[i]]==0&&c[b[i]]==0)
                     d[i]++, c[a[i]]++, c[b[i]]++;
      for(i=0;i<m;i++)
                 if(d[i])
                         std::cout<<i<<" ";
      std::cout<<'\n';
     }
     return 0;
}
