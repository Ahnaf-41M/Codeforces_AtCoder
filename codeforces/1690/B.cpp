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
	int n, dif = -1, dif2 = -1;
	cin >> n;

	int a[n], b[n];
	for (int &x : a) cin >> x;
	for (int &x : b) cin >> x;

	rep(i, 0, n - 1) {
		if (a[i] < b[i]) {
			cout << "NO\n";
			return;
		}
		if (b[i]) {
			if (dif == -1) dif = a[i] - b[i];
			else {
				if (dif != a[i] - b[i]) {
					cout << "NO\n";
					return;
				}
			}
		}
		else dif2 = max(dif2, a[i] - b[i]);
	}
	if (dif2 > dif && dif != -1) cout << "NO\n";
	else cout << "YES\n";
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