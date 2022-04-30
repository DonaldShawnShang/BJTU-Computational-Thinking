#include <stdio.h>
int main()
{
    long long int a, b, c = 0;
    char d;
    while (scanf("%lld", &a), a != 0)
    {
        while (d = getchar(), d != '\n')
        {
            scanf("%lld", &b);
            c += b;
        }
        printf("%lld\n", c + a);
        c = 0;
    }
    return 0;
}