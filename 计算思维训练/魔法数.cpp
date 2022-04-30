#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<queue>
using namespace std;
int x,n;
int main()
{
    int no=1;
    while(cin>>x>>n){
        cout<<"Case "<<no++<<":"<<endl;
        int flag=0;
        for(int a=1;a<=n;a++)
            for(int b=a;b<=n;b++)
                for(int c=b;c<=n;c++)
                    for(int d=c;d<=n;d++)
                        {if(pow(a,x)+pow(b,x)+pow(c,x)==pow(d,x)) 
                        {cout<<a<<"^"<<x<<"+"<<b<<"^"<<x<<"+"<<c<<"^"<<x<<"="<<d<<"^"<<x<<endl;
                        flag=1;}
                        }
        if(flag==0)
            cout<<"No such numbers."<<endl;
    }
    return 0;
}
