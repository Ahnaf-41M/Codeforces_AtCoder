#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,n,sum=0,x;
     double ans;

     cin>>n;
     for(i = 0; i < n; i++){
          cin>>x;
          sum+=x;
     }
     ans = (sum*1.0/(n*1.0*100));
     printf("%.12lf\n",ans*100);

}
