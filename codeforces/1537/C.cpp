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
	int n, t = 1, cur = 1e18, ind;


	cin >> n;

	int ar[n];
	for (int &x : ar)
		cin >> x;
	sort(ar, ar + n);
	rep(i, 0, n - 2) {
		if (abs(ar[i] - ar[i + 1]) < cur) {
			cur = abs(ar[i] - ar[i + 1]);
			ind = i;
		}
	}
	cout << ar[ind] << " ";
	rep(i, ind + 2, n - 1) cout << ar[i] << " ";
	rep(i, 0, ind - 1) cout << ar[i] << " ";
	cout << ar[ind + 1];
	cout << "\n";
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T = 1;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}