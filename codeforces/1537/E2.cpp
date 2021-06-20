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
	int n, k;
	string s1, s2 = "";
	cin >> n >> k >> s1;

	int ind = 0;
	s2 = s1[0];
	rep(i, 1, n - 1) {
		if (s1[i] > s1[ind]) break;
		s2 += s1[i];
		if (s1[i] == s1[ind]) ind++;
		else ind = 0;
	}
	while (ind > 0) {
		s2.pop_back();
		ind--;
	}
	rep(i, 0, k - 1) cout << s2[i % (int)s2.size()];

}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}