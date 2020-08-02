#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    IOS
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n,i,cnt=0;
    string s;

    cin>>n>>s;

    int l = 0,r = n-1;

    while(l < r)
    {
    	if(s[l]=='W' && s[r]=='R')
    	{
    		swap(s[l],s[r]);
    		l++,r--;
    		cnt++;
    	}
    	else if(s[l]=='W')
    		r--;
    	else
    		l++;
    }
    cout<<cnt<<endl;
}