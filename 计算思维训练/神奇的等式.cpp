#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;
int FindDuplication(int *tmp, int n)
{
    short i, j;
    for(i=0; i < n-1; i++)
    {
        for(j = i + 1; j < n; j ++)
        {
            if(tmp[i]==tmp[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n,no=1,tmp[10];
    long long x,y;
    while(cin>>n)
    {
        int flag=0;
        cout<<"Case "<<no++<<":"<<endl;
        for(y=99999/n;y>0;y--)
        {
            x=y*n;
            tmp[0]=x/10000;
            tmp[1]=x/1000%10;
            tmp[2]=x/100%10;
            tmp[3]=x/10%10;
            tmp[4]=x%10;
            if(FindDuplication(tmp,5)==1)
                continue;
            tmp[5]=y/10000;
            tmp[6]=y/1000%10;
            tmp[7]=y/100%10;
            tmp[8]=y/10%10;
            tmp[9]=y%10;
            if(FindDuplication(tmp+5,5)==1)
                continue;
            if(FindDuplication(tmp,10)==0)
            {
                cout<<"    "<<tmp[0]<<tmp[1]<<tmp[2]<<tmp[3]<<tmp[4]<<"/"<<tmp[5]<<tmp[6]<<tmp[7]<<tmp[8]<<tmp[9]<<"="<<n<<endl;
                flag=1;
            }
        }
        if(flag==0)
            cout<<"    No such numbers"<<endl;
    }
    return 0;
}
