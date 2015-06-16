#include <cstdio>
 
class bignum{
	unsigned int data[16];
	public:
	bignum(){
		for(int i=0; i<16; i++)
			data[i]=0;
	}
	bignum operator=(unsigned int x){
		for(int i=0; i<16; i++)
			data[i]=0;
		data[0]=x;
	}
	bignum &operator*=(unsigned int x){
		unsigned int carry=0;
		for(int i=0; i<16; i++){
			unsigned long long next=(unsigned long long)x*data[i]+carry;
			data[i]=next;
			carry=next>>32;
		}
	}
	bool operator<(const bignum &rhs) const{
		for(int i=15; i>=0; i--){
			if(data[i]<rhs.data[i])
				return true;
			if(data[i]>rhs.data[i])
				return false;
		}
		return false;
	}
	unsigned int operator%(unsigned int x){
		unsigned int carry=0;
		for(int i=15; i>=0; i--){
			unsigned long long next=((unsigned long long)carry<<32)+data[i];
			carry=next%x;
		}
		return carry;
	}
};
 
bignum P[1<<15];
 
int main(){
	P[0]=1;
	int H;
	while(scanf("%d", &H) && H){
		bignum res;
		res=1;
		for(int i=1; i<1<<H; i++){
			int V;
			scanf("%d", &V);
			P[i]=P[i/2];
			P[i]*=V;
			if(res<P[i])
				res=P[i];
		}
		printf("%d\n", res%1000000007);
	}
	return 0;
}
 