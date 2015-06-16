#include <iostream>
using namespace std;
bool pal(int n) {
	int p, q=0;
	p=n;
	while(p>0) {
	q=q*10+p%10;
	p=p/10;
	}
	if(q==n) return true;
	else return false;
}
 
int main() {
	int a, arr[1005000], b;
	cin>>a; b=a;
	for(int k=0; k<1005000; k++) arr[k]=true;
	arr[0]=arr[1]=false;
	for(int i=2; i*i<1005000; i++) {
		if(!arr[i]) continue;
		for(int j=i*i; j<1005000; j=j+i) {
			arr[j]=false;  
		}
	}
	for(b=a;;b++) {
		if(arr[b] && pal(b)) {
			cout<<b; break;
		}
	}
	return 0;
}
