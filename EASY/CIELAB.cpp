#include<stdio.h>
int main(){
  int i,j,k;
  scanf("%d%d",&i,&j);
  k = i-j;
  if(k%10!=9) 
      k++; 
  else 
       k--;
  printf("%d\n",k);
  return 0;
}
