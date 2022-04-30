#include<stdio.h>
int main(){
    int n;
    while((scanf("%d",&n)!=EOF)&&n>0)
    {
        long long a[n];
        long long sum=0;
        while(n--)
        {
            scanf("%lld",&a[n]);
            sum+=a[n];
        }
        printf("%lld\n",sum);
    }
    return 0;
}