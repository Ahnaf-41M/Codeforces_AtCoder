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
    ll i,n,k,cnt=0;

    cin>>k;

    if(k==1||k==7)
    	cout<<1<<endl;
    else
    {
    	n = 7;
    	for(i = 2; i <= 1100000; i++)
    	{
    		n = n*10+7;
    		n%=k;

    		if(n==0)
    		{
    			cout<<i<<endl;
    			return 0;
    		}
    	}
    	cout<<-1<<endl;

    }

     return 0;
}