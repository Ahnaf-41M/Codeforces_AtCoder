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

void Solve(int tc)
{
	int n;
	string s;
	map<char, char> child, par;
	map<char, int> done;

	cin >> n >> s;

	for (int i = 0; i < n; ++i)
	{
		if (child.find(s[i]) != child.end()) continue;
		for (char ch = 'a'; ch <= 'z'; ch++) {
			char cur = s[i];
			int cnt = 0;
			if (ch == s[i]) continue;

			while (cur != ch && cur >= 'a' && cur <= 'z' && cnt != child.size()) {
				// cur = par[cur];
				if (!par[cur]) break;
				cur = par[cur];
				cnt++;
			}
			// cout << ch << "::=>  " <<  cnt << " " << child.size() << "\n";

			if ((child.size() < 25 && (cur == ch)) || done[ch])
				continue;
			child[s[i]] = ch;
			par[ch] = s[i];
			done[ch]++;
			break;
		}
	}
	for (char ch : s) cout << child[ch];
	cout << "\n";
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