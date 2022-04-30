#include<stdio.h>
int main(){
    int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       long long sum=0;
       int m;
       scanf("%d",&m);
       for(int j=0;j<m;j++)
       {
           long long a;
           scanf("%lld",&a);
           sum+=a;
       }
       printf("%lld\n",sum);
   }
    return 0;
}