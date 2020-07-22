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
#define rep(a,b,c)      for(int i = a; i < b; i+=c)
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
	int i, n,j;
	string s, t, c1, c2;
	vector<int> ans;

	cin >> n >> s >> t;
	c1 = s, c2 = t;
	sort(c1.begin(), c1.end());
	sort(c2.begin(), c2.end());
	if (c1 != c2)
	{
		cout << -1 << endl; return 0;
	}
	i = 0;

	while(i < n)
	{
		if(s[i]==t[i])
		{
			i++; continue;
		}
		int ind=-1;

		for(j = i+1; j < n; j++)
		{
			if(s[j]==t[i])
			{
				ind = j;
				break;
			}
		}
		if(ind==-1)
		{
			cout<<-1<<endl;
			return 0;
		}
		for(j = ind; j > i; j--)
		{
			swap(s[j],s[j-1]);
			ans.pb(j);
		}
		i++;
	}
	cout << ans.size() << endl;
	rep(0, ans.size(), 1) cout << ans[i] << " ";

	return 0;
}
