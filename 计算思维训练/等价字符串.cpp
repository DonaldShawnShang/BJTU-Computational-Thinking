#include <string>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int t1[30],t2[30];
int main(){
    string s1,s2;
    cin>>s1>>s2;
    vector<int>t1(26);
    vector<int>t2(26);
    for(int i=0;i<=s1.size();i++)
    {
        t1[s1[i]-'A']++;
        t2[s2[i]-'A']++;
    }
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    for(int i=0;i<26;i++)
    {
        if(t1[i]!=t2[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
