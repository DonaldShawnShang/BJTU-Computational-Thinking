#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define N 10005
using namespace std;
int n;
int a[N];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n,greater<int>());
        for (int i = 0; i <n; ++i) {
            if(a[i]==a[i+1])
            {
                for(int j=i+1;j<n;j++)
                    a[j]=a[j+1];
                n--;
                i--;
            }
        }
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}