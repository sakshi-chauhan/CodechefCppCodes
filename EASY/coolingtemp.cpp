#include<stdio.h>
#include<stdlib.h>

int cnt,r[30],n,p[30];
void check(int pie)
{
 int max=100,flag=0,index,i;
 for(i=0;i<n;i++)
  {
     if(r[i]>=pie&&r[i]<max)
       {    
         index=i;
         max=r[i];
         flag=1;
       } 
   }
   if(flag==1)
    {
     cnt++;
     r[index]=-1;
     } 
 }    
int main()
{
 int T,i;
 scanf("%d",&T);
 while(T)
 {
  cnt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&p[i]);
  for(i=0;i<n;i++)
    scanf("%d",&r[i]);
  for(i=0;i<n;i++)
   {
    check(p[i]);
   }
   printf("%d\n",cnt);
   T--;
  }
  return 0;
}
