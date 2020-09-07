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
	int n, i, t, j;

	cin >> t;

	W(t)
	{
		cin >> n;
		int a[n + 1];
		map<int, int> last;
		bool ok = false;

		rep(i, 1, n + 1) {
			cin >> a[i];
			if (last[a[i]] && i - last[a[i]] > 1)
				ok = true;
			if (!last[a[i]]) last[a[i]] = i;
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}