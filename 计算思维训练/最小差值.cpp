#include<iostream>
#include<algorithm>
#define MAX  10005
using namespace std;
int main()
{
    int n;
    long long min=922337203685477580;
    scanf("%d",&n);
    long long a[MAX];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        for(int j=0;j<i;j++)
        {
            if(abs(a[j]-a[i])<min)
                min=abs(a[j]-a[i]);
        }
    }
    printf("%lld\n",min);
    return 0;
}