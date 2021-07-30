#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          unsigned long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void call()
{
	return;
}
void Solve(int tc)
{
	call();
	int n, res = 0;
	cin >> n;
	if (n > 6) {
		n = (n % 2 ? n + 1 : n);
		n *= 5; n >>= 1;
		res = n;
		cout << res << "\n";
	}
	else cout << 15 << "\n";
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