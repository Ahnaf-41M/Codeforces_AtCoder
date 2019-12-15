#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
   ll t,s,v,j,e,f,res1,res2;

   cin>>t>>s>>v>>j>>e>>f;
   res1 = min(s,min(v,j))*f+e*(min(t,j-min(s,min(v,j))));
   res2 = e*min(t,j)+f*min(s,min(v,j-min(t,j)));

   cout<<max(res1,res2)<<endl;
}
