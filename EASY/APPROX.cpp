#include<cstdio>
char s[]="415926530119026040722614947737296840070086399613316";
int main(){
    int t,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&k);
        putchar('3');
        if(k!=0){
            putchar('.');
                putchar('1');
                int j=0;
                for(int i=0;i<k-1;++i){
                    putchar(s[j++]);
                    if(j>50) j=0;
                }
        }
        printf("\n");
    }
    return 0;
}
