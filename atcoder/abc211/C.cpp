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

int dp[10];
string s;
int mod = 1e9 + 7;
void Solve(int tc)
{
	string s2 = "chokudai";
	map<char, int> mp;
	int j = 0;
	for (int i : s2) mp[i] = j, j++;

	cin >> s;

	irep(i, s.size() - 1, 0) {
		if (s[i] == 'c' || mp[s[i]]) {
			if (mp[s[i]] == 7)
				dp[mp[s[i]]]  = (dp[mp[s[i]]] + 1) % mod;
			else
				dp[mp[s[i]]] = (dp[mp[s[i]]] + dp[mp[s[i]] + 1]) % mod;
		}
	}
	cout << dp[0];

}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}