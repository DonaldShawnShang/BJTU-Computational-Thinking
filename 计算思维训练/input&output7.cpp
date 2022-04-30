#include<iostream>
using namespace std;
int main()
{
    long long a,b,flag=1;
    cin>>a>>b;
    while (flag){
        cout<<a+b<<endl;
        if (cin>>a>>b)
            cout<<endl;
        else
            flag=0;
    }
    return 0;
}