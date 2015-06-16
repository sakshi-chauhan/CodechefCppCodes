#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	int A,B;
	char s[100];
	scanf("%d%d",&A,&B);
	sprintf(s,"%d",A-B);
	int len=strlen(s);
	for (int i=0;i<len;++i){
		if (s[i]<'9'){
			++s[i];
			break;
		}
		if (s[i]>'0' && i){
			--s[i];
			break;
		}
		if (s[i]>'1'){
			--s[i];
			break;
		}
	}
	puts(s);
	return 0;
}
