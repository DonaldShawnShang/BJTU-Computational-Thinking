#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        long a, b;
        scanf("%ld%ld",&a,&b);
        printf("%ld\n", a+b);
    }
    return 0;
}