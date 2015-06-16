#include <iostream>
#include <cstdlib>
int fact(int a) {
 return (a==1 || a==0) ? 1 : fact(a-1)*a; 
}

int cmp(const void *a, const void *b) {
 return (*(int*)b - *(int*)a);
}

int main() {
     int t, p[12], k, k_th, in, out, tot;
     std::cin>>t;
     while(t--) {
          for(int i=0; i<11; i++)
                  std::cin>>p[i];
          std::cin>>k;
          qsort(p, 11, sizeof(int), cmp); 
          k_th=p[k-1];
          in=out=tot=0;
          for(int i=0; i<k; i++) 
                  if(k_th==p[i])
                      in++;
          for(int i=k; i<11; i++)
                   if(k_th==p[i])
                      out++;
          tot=in+out;
          std::cout<<(fact(tot)/(fact(in)*fact(out)))<<'\n';
     }
 return 0;
}
