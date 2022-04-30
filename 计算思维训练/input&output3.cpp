#include<stdio.h>
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            return 0;
        else
            printf("%lld\n",a+b);
    }
    return 0;
}