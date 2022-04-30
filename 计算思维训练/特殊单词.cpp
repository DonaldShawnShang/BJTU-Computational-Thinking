#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
vector<string>str1(10010),tem(10010),jud(10010);
string tmp1,tmp2;
int a,b;
int main()
{
    while(cin>>str1[a])
    {
        if(str1[a]=="#") break;
        for(int i=0;i<a;i++)
        {
            if(str1[a].length()!=str1[i].length()||str1[i]==str1[a])
                continue;
            tmp1=str1[i];
            tmp2=str1[a];
            for(int j=0;j<tmp1.length();j++)
            {
                if(tmp1[j]>='A'&&tmp1[j]<='Z')
                    tmp1[j]-=('A'-'a');
                if(tmp2[j]>='A'&&tmp2[j]<='Z')
                    tmp2[j]-=('A'-'a');
            }
            sort(tmp1.begin(),tmp1.end());
            sort(tmp2.begin(),tmp2.end());
            int flag=0;
            if(tmp1==tmp2)
            {
                for(int k=0;k<b;k++)
                {
                    if(str1[i]==tem[k]||tmp1==jud[k])
                    {
                        flag=1;
                        break;
                    }
                }if(flag==0)
                {
                    tem[b]=str1[i];
                    jud[b]=tmp1;
                    b++;
                }
            }
        }
        a++;
    }
    sort(tem.begin(),tem.end());
    for(int i=0;i<tem.size();i++)
    {
        if(tem[i]=="")
            continue;
        cout<<tem[i]<<endl;
    }
    return 0;
}
