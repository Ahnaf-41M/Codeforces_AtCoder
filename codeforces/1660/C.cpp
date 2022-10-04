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
	string s;
	int n;

	cin >> s;
	n = s.size();

	int i = 0, ans = 0, freq[26] = {};
	while (i < n) {
		freq[s[i] - 'a']++;
		if (freq[s[i] - 'a'] == 2) {
			ans -= 2;
			for (char ch = 'a'; ch <= 'z'; ch++) {
				ans += freq[ch - 'a'];
				freq[ch - 'a'] = 0;
			}
		}
		i++;
	}
	for (char ch = 'a'; ch <= 'z'; ch++)
		ans += freq[ch - 'a'];
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