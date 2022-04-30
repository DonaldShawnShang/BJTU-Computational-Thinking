#include<stdio.h>
int main()
{
    long long a,b,sum=0;
    char d;
    while(scanf("%llX",&a)!=EOF)
    {
        while(d=getchar(),d!='\n')
        {
            scanf("%llX", &b);
            sum+=b;
        }
        printf("%lld\n",sum+a);
        sum=0;
    }
    return 0;
}