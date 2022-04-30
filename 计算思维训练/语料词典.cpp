#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <queue>
#include<map>
#include <unordered_map>
using namespace std;
#define pairs const pair<string,int>
unordered_map<string,int> umap;
bool cmp(pairs &p1, pairs &p2)
{
    if(p1.second==p2.second)
        return p1.first<p2.first;
    else
        return p1.second>p2.second;   
}
int main()
{
    string tmstr;
    while(cin>>tmstr)
    {
        string sub="";
        for(int i=0;i<tmstr.size();i++)
        {
            if(tmstr[i]>='a'&&tmstr[i]<='z')
            {
                sub.push_back(tmstr[i]);
            }
            else if(tmstr[i]>='A'&&tmstr[i]<='Z')
            {
                tmstr[i]=tolower(tmstr[i]);
                sub.push_back(tmstr[i]);
            }
            else if(tmstr[i]=='\'')
                break;
            else continue;
        }
        if(sub=="") continue;
        if(umap.find(sub)==umap.end())
            umap.insert({sub,1});
        else umap.find(sub)->second++;
    }
    vector< pair<string,int> > vec(umap.begin(),umap.end());
    sort(vec.begin(),vec.end(),cmp);      
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<endl;
    }
    return 0;
}
