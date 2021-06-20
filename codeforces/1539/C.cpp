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

int n, k, x;
void Work(vector<int> &tmp, int n, vector<int> &v1)
{
	irep(i, n - 1, 1) {
		int dif = v1[i] - v1[i - 1];
		int dv = (v1[i] - v1[i - 1] - 1) / x;
		if (dif > x) tmp.pb(dv);
	}
	sort(all(tmp), greater<int>());
}
void Work2(vector<int> &v2)
{
	while (!v2.empty()) {
		int len = v2.size();
		if (v2[len - 1] > k) break;
		v2.pop_back();
		k -= v2[len - 1];
	}
}
void Solve(int tc)
{
	cin >> n >> k >> x;
	vector<int> v1(n), v2(n);

	for (int &x : v1) cin >> x;
	sort(all(v1));

	Work(v2, n, v1);
	Work2(v2);

	int ans = v2.size();
	// for(int x : v2) cout<<x<<" ";
	cout << ans + 1 << endl;
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}