#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,i,s=0,m;
cin>>t;
while(t--)
{
cin>>n>>m;
long long a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];

}
if(s>=m)
{
cout<<m<<endl;
}
else if(s<m)
cout<<s<<endl;
s=0;
}
}
