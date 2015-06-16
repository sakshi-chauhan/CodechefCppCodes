#include <iostream>
int main() {
 int a, n, k;
 std::cin>>a>>n>>k;
 while(k--) {
  std::cout<<a%(n+1)<<" ";
  a=a/(n+1);
 }
 return 0;
}
