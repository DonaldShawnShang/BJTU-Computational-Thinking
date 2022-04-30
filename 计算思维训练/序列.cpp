#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==1) cout<<1<<endl;
        int t2=0,t3=0,t5=0;
        vector<long long>a(n);
        a[0]=1;
        for(int i=1;i<n;i++){
            a[i]=min(a[t2]*2,min(a[t3]*3,a[t5]*5));
            if(a[i]==a[t2]*2)t2++;
            if(a[i]==a[t3]*3)t3++;
            if(a[i]==a[t5]*5)t5++;
        }
        cout<<a[n-1]<<endl;
        }
    return 0;
}