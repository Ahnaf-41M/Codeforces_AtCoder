#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int call(string s, char curCh)
{
	if (s.size() == 2) {
		int r1 = (s[0] != curCh) + (s[1] != curCh + 1);
		int r2 = (s[0] != curCh + 1) + (s[1] != curCh);
		return min(r1, r2);
	}

	int r1 = 0, r2 = 0, n = s.size();
	string pref, suf;

	for (int i = 0; i < n / 2; i++) {
		if (s[i] != curCh) r1++;
		pref.pb(s[i]);
	}
	for (int i = n / 2; i < n; i++) {
		if (s[i] != curCh) r2++;
		suf.pb(s[i]);
	}

	return min(r1 + call(suf, curCh + 1), r2 + call(pref, curCh + 1));

}
void Solve(int tc)
{
	int n;
	string s;

	cin >> n >> s;

	if (n == 1) {
		cout << (s[0] != 'a') << "\n";
		return;
	}
	cout << call(s, 'a') << "\n";
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