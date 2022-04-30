#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int py,iq,eq,lu;
int p,i,e,l,d;
int main()
{
    int no=1;
    while(cin>>py>>iq>>eq>>lu)
    {
        cout<<"Case "<<no++<<": ";
        cin>>p>>i>>e>>l>>d;
        long long max_day=py*iq*eq*lu+1;
        int flag=0;
        for(int j=d+1;j<max_day;j++)
        {
            if((j-p)%py==0&&(j-i)%iq==0&&(j-e)%eq==0&&(j-l)%lu==0)
                {
                    flag=1;
                    cout<<j-d<<endl;
                    break;
                }
        }
        if(!flag)
        {
            cout<<"No such days."<<endl;
        }
    }
    return 0;
}
