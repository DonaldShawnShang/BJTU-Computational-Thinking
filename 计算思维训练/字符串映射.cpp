#include <string>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
const int N=1e6+10;
long long word1[N],word2[N];
long long times1[N],times2[N];
vector<char> q1[1000];
vector<char> q2[1000];
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int t=1;
    for(int i=0;i<s1.size();i++){
        word1[s1[i]]++;
        word2[s2[i]]++;
    }
    for(int i='A';i<='Z';i++){
        times1[word1[i]]++;
        times2[word2[i]]++;
    }
    for(int i=0;i<1e4;i++){
        if(times1[i]!=times2[i]){
            t=0;
        }
    }
    for(int i='A';i<='Z';i++){
        q1[word1[i]].push_back(i);
        q2[word2[i]].push_back(i);
    }
    int k=0;
    if(t==1){
        printf("YES\n");
        for(int i=999;i>0;i--){
            if(q1[i].size()!=0){
                for(int j=0;j<q1[i].size();j++){
                    if(k==0){
                        printf("%c->%c",q1[i][j],q2[i][j]);
                        k++;
                    }else{
                        printf(" %c->%c",q1[i][j],q2[i][j]);
                    }
                }
            }
        }
        printf("\n");
    }else{
        printf("NO\n");
    }
}
