#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int a,b,i=1;
    while(cin>>a>>b)
    {
        vector<int> v1,v2,v3,v4;
        while(a-->0)
        {
            int num;
            cin>>num;
            v1.push_back(num);
            v3.push_back(num);
        }
        sort(v1.begin(),v1.end());
        while(b-->0)
        {
            int num;
            cin>>num;
            v2.push_back(num);
        }
        printf("Case #%d:\n",i++);
        for(int i=0;i<v2.size();i++)
        {   int  c=find(v1.begin(),v1.end(),v2[i])-v1.begin();
            int  d=find(v3.begin(),v3.end(),v2[i])-v3.begin();
            c++;
            d++;
            if(c>v1.size())
                printf("%d not found\n",v2[i]);
            else
                printf("%d from %d to %d\n",v2[i],d,c);
        }
    }
    return 0;
}
