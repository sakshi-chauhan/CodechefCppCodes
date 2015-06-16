#include<iostream>
int M;
long long a,b,c,d;
int sum(long long n) {
    
    a = n % (30 * M);
    b = (n + 1) % (30 * M);
    c = (2 * n + 1) % (30 * M);
    d = (3 * n) % (30 * M);
    d = (d * n) % (30 * M);
    d = (d + 3 * n - 1) % (30 * M);
    a = (a * b) % (30 * M);
    c = (c * d) % (30 * M);
    a = (a * c) % (30 * M);
    a /= 30;
    return a % M;
}
 
int segment(long long a, long long b) {
    return (sum(b) - sum(a) + M) % M;
}
 
int main() {
    int T,i;
    long long N,a,b;
    int sol,top;
    long long D[1000000];
 
    std::cin >> T;
 
    while(T--) {
        std::cin >> N >> M;
 
        sol = 0;
        top = 0;
        D[++top] = N;
 
        for(a = 1; a * a <= N; a++) {
            D[++top] = a;
            D[++top] = N / (a + 1);
        }
 
        std::sort(D + 1, D + top + 1);
 
        a = N + 2;
 
        for(i = 0; i <= top; i++) {
            b = D[i];
            if(b)
                sol = (sol + segment(a, b) * (N / b)) % M;
            a = b;
        }
 
        std::cout << sol << '\n';
    }
 
    return 0;
}
