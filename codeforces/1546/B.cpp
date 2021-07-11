#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

map<char, int> pos[MX];

void Solve(int tc)
{
	int n, m;
	vector<string> v;
	map<char, int> mp;

	cin >> n >> m;

	rep(i, 1, n) {
		string s;
		cin >> s;
		v.pb(s);
		rep(i, 0, m - 1) pos[s[i]][i]++;
	}
	rep(i, 1, n - 1) {
		string s;
		cin >> s;
		rep(i, 0, m - 1) pos[s[i]][i]--;
	}

	string ans;
	for (auto s : v) {
		bool ok = 1;
		ans = s;
		rep(i, 0, m - 1) {
			if (!pos[s[i]][i]) ok = 0;
		}
		if (ok) break;
	}
	cout << ans << "\n";
	fflush(stdout);
	for (char ch = 'a'; ch <= 'z'; ch++) pos[ch].clear();
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T = 1;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}