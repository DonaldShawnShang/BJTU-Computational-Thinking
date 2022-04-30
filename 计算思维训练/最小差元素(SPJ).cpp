include<iostream>
#include<algorithm>
#define MAX  10005
using namespace std;
int main()
{
    int n,i1=0,j1=0,min1,max1;
    long long mink=922337203685477580;
    scanf("%d",&n);
    long long a[MAX];
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        for(int j=1;j<i;j++)
        {
            if(abs(a[j]-a[i])<mink)
            {
                i1=i;
                j1=j;
                mink=abs(a[j]-a[i]);
            }
        }
    }
    min1=min(i1,j1);
    max1=max(i1,j1);
    printf("%lld %d %d\n",mink,min1,max1);
    return 0;
}