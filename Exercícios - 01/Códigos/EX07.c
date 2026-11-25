#include <stdio.h>

int main(){
    long long n1, n2;
    printf("\nDigite dois números:");
    scanf("%lld %lld", &n1, &n2);

    if (n1 > n2) {
        for (long long i = n2 + 1; i < n1; i++) {
            printf("%lld ", i);

        }
    }
    else {
        for (long long i = n1 + 1; i < n2; i++) {
            printf("%lld ", i);
        }
    }
    return 0;
}