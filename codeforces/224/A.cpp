#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,c,s1,s2,s3;

     cin>>s1>>s2>>s3;

     a = (s1*s3)/s2;
     a = sqrt(a);
     b = (s1*s2)/s3;
     b = sqrt(b);
     c = (s2*s3)/s1;
     c = sqrt(c);
     int ans;
     ans = 4*(a+b+c);
     cout<<ans<<endl;
}
