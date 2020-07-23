#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(a,b,c)      for(int i = a; i < b; i+=c)
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

	int t, n, i;
	string s;

	cin >> t;

	W(t)
	{
		cin >> n >> s;
		if (s[0] == '>' || s[n - 1] == '<')
			cout << 0 << endl;
		else
		{
			int l = 0, r = 0;

			i = 0;
			while (s[i] == '<')
			{
				i++;
				l++;
			}
			i = n - 1;
			while (s[i] == '>')
			{
				i--;
				r++;
			}

			cout << min(l, r) << endl;
		}

	}

	return 0;
}