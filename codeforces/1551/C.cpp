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

char mxChar;

bool cmp(string s1, string s2)
{
	int f1 = 0, f2 = 0, n1 = s1.size(), n2 = s2.size();
	for (char ch : s1) f1 += (mxChar == ch);
	for (char ch : s2) f2 += (mxChar == ch);
	n1 -= f1, n2 -= f2;
	return f1 - n1 > f2 - n2;
}
void Solve(int tc)
{
	int n, ans = 0;
	cin >> n;

	vector<string> v(n);
	for (auto &s : v) cin >> s;

	for (char ch = 'a'; ch <= 'e'; ch++) {
		mxChar = ch;
		sort(all(v), cmp);
		int curF = 0, curL = 0, cur = 0;

		for (auto s : v) {
			int frq = 0;
			for (char x : s) frq += (x == ch);
			int dif = (int)s.size() - frq;
			if (dif + curL < frq + curF) {
				curF += frq, curL += dif;
				cur++;
			}
		}
		ans = max(ans, cur);
	}
	cout << ans << "\n";
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