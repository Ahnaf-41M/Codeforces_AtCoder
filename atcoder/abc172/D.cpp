#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
#define ll long long
ll a[mx+5]={};
vector<ll> v;

void finddiv()
{
    ll i,j;
    v.push_back(0);
    for(i = 1; i <= mx; i++)
    {
        for(j = i; j <= mx; j+=i)
        {
            a[j]++;
        }
        v.push_back(a[i]*i+v.back());
    }
}
int main()
{
    finddiv();
    ll n,a1;
    cin>>n;
   // a1 = accumulate(v.begin(),v.begin()+n,0);
    cout<<v[n];



}

