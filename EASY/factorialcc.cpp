#include<iostream>
int main(){
    long long T;
    long long n;    
    std::cin>>T;
    long long num_zeroes;
    for(long long i =0;i<T;i++){
             num_zeroes=0;
             std::cin>>n;
             for(long long j=n/5;j>0;j/=5)
                      num_zeroes+=j;         
    std::cout<<num_zeroes<<"\n";
    }
    return 0;
}
