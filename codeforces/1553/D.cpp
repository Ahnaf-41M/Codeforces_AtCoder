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

void Solve(int tc)
{
	string s, t;
	int n, m, last;

	cin >> s >> t;
	n = s.size(), m = t.size();
	last = n - 1;
	while (last >= 0 && s[last] != t[m - 1]) last -= 2;

	int j = m - 2, i = last - 1;
	while (i >= 0 && j >= 0) {
		if (s[i] == t[j]) j--, i--;
		else i -= 2;
	}

	if (j == -1 && last >= 0) cout << "YES\n";
	else cout << "NO\n";
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