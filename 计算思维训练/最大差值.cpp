#include<iostream>
#include<cmath>
using namespace std;
#define N 10005
long long a[N];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld", &a[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                long long temp;
                temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%lld\n",a[n-1]-a[0]);
    return 0;
}