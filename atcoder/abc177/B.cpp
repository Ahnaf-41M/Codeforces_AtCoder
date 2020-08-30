#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)            while(t--)
#define clr(a)          memset(a,0,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i, len1, len2, j;
	string s, t;

	cin >> s >> t;
	len1 = s.size();
	len2 = t.size();

	int ans = len2;
	rep(i, 0, len1 - len2+1)
	{
		int dif = 0;
		rep(j, 0, len2)
		{
			if (s[i + j] != t[j])
				dif++;

		}
		ans = min(dif, ans);
	}
	cout<<ans<<endl;


	return 0;
}