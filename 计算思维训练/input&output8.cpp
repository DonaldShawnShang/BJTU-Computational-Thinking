#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        long long m, sum=0, index;
        scanf("%lld", &m);
        while (m--) {
            scanf("%lld", &index);
            sum += index;
        }
        printf("%lld\n", sum);
        if (n != 0)
            printf("\n");
    }
    return 0;
}