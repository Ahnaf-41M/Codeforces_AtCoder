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

int POW(int base, int p)
{
	rep(i, 1, p - 1) base *= (int)10;
	return base;
}
int POW2(int base, int x)
{
	rep(i, 1, x - 1) base *= (int)10, base++;
	return base;
}
int Work(int x)
{
	int res = 0, x2 = x;
	while (x > 10) {
		int p = log10(x);
		int pp = POW(10, p);
		res += POW2(11, p);
		x -= pp;
		// cout << pp << "--> " << p << endl;
	}
	if (x == 10) res += 10;
	else if (x > 0) res += (x - 1);
	else res--;
	return res;
}
void Solve(int tc)
{
	int l, r, s1 = 0, s2 = 0;

	cin >> l >> r;
	s1 = Work(l);
	s2 = Work(r);

	cout << s2 - s1 << "\n";
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