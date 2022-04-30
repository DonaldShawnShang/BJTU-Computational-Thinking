#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int n, w;
    while(cin>>n>>w)
    {
        vector<string> filename(n);
        int mxl=0;
        for(int i=0;i<n;i++)
        {
            cin>>filename[i];
            if(filename[i].size()>mxl) 
                mxl=filename[i].size();
        }
        sort(filename.begin(),filename.end());
        for(int i=0;i<w;i++)
            cout<<'-';
        cout<<endl;
        int k=0;
        int minc=(w+2)/(mxl+2);
        int line=int(n/minc);
        int lefts=n%minc;
        vector<int> ans(minc,line);
        vector<vector<string> > fin(line+1, vector<string>(minc));
        for(int i=0;i<lefts;i++)
            ans[i]++;
        for(int i=0;i<minc;i++)
            for(int j=0;j<ans[i];j++)
                fin[j][i]=filename[k++];
        vector<string>::iterator its;
        vector<vector<string> >::iterator iters;
        vector<string> vec_tmp;
        for(iters=fin.begin();iters!=fin.end();iters++)
            {
                vec_tmp=*iters;
                if(iters==fin.end()-1&&lefts!=0)
                    {for(its= vec_tmp.begin();its!=vec_tmp.end()-1;its++){
                        if(*(its+1)=="") break;
                        cout<<setw(mxl+2)<<left<<*its;}
                    cout<<*its<<endl;
                    break;
                }
                for(its=vec_tmp.begin();its!=vec_tmp.end();its++)
                    if(its!=vec_tmp.end()-1)
                    {
                        if(*its=="") break;
                        cout<<setw(mxl+2)<<left<<*its;
                    }
                    else{
                        if(*its=="") break;
                        cout<<*its;
                    }
                if(iters==fin.end()-1) break;
                cout<<endl;
            }
    }
    return 0;
}