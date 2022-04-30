#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n,q;
int b[9999];
int a[9999];
int t=1;
int main()
{
    while(scanf("%d%d",&n,&q)!=EOF){
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        for(int i=0;i<q;i++)
            cin>>b[i];
        cout<<"Case #"<<t<<":"<<endl;
        t++;
        for(int j=0;j<q;j++)
        {
            int flag=0;
            for(int i=1;i<=n;i++)
            {
                if(a[i]==b[j])
                {
                    if(!flag)
                    {
                        flag=1;
                        cout<<b[j]<<" found at "<<i<<endl;
                    }
                }
            }
            if(!flag)
                cout<<b[j]<<" not found"<<endl;
        }
    }
    return 0;
}
