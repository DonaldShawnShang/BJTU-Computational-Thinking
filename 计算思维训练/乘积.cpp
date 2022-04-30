#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;
int main()
{
   vector<int> v;
   int x,x1,no=1;
   while(cin>>x)
   {
       v.push_back(x);
       while(getchar()!='\n')
       {
           cin>>x1;
            v.push_back(x1);
       }
       int v_size=v.size();
       int lp=0,rp=0;
       long long sum=v[0];
       for(int i=0;i<v_size;i++)
       {
           long long res=1;
           for(int j=i;j<v_size;j++)
           {
                res*=v[j];
                if(res>sum||(res==sum&&j-i<rp-lp))
                {
                   lp=i,rp=j;
                   sum=res;
                }
                else if(res==sum&&j-i==rp-lp)
                    if(i<lp)
                        lp=i,rp=j;
           }
       }
       cout<<"Case "<<no++<<": "<<sum<<" "<<lp<<"-"<<rp<<endl;
       v.clear(); 
   }
   return 0;
}