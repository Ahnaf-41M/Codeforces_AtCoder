#include<bits/stdc++.h>
#include <ext/rope>

#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))

#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)    __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)       __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)       __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define PI   M_PI
#define endl "\n"
#define sc   scanf
#define pf   printf

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep1(i,n)       for(int i = 0; i < n; i++)
#define rep2(a,b)       for(int i = a; i <= b; i++)
#define rep3(a,b,c)     for(int i = a; i <= b; i+=c)
#define irep(a,b,c)     for(int i = b; i >=a; i-=c)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
using namespace __gnu_cxx;

int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i;
	cin >> n;
	int a[n];

	map<int, int> mp;
	int ans = 0;

	rep1(i, n)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	if (mp.size() == n)
		cout << n - 1 << endl;
	else
	{
		int mx = -1;
		vector<int> v;
		for (auto x = mp.begin(); x != mp.end(); x++)
		{
			v.pb(x->second);
			mx = max(mx, x->second);
		}
		sort(v.begin(), v.end());

		for (i = 0; i < mx; i++)
		{
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] > 0)
				{
					v[j]--;
					ans++;
				}
			}
			ans--;

		}

		cout << ans << endl;
	}

	return 0;
}
