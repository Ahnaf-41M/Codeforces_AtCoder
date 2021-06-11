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

bitset<MX> OK;
vector<int> primes;
void Sieve()
{
	for (int i = 3; i < MX; i += 2)
		OK[i] = 1;
	for (int i = 3; i < MX; i += 2)
		if (OK[i])
			for (int j = i * i; j < MX; j += i)
				OK[j] = 0;

	primes.pb(2);
	for (int i = 3; i < MX; i += 2)
		if (OK[i])
			primes.pb(i);
}
void Fact(int num, int &cnt)
{
	for (int x : primes) {
		if (x * x > num) break;
		while (num % x == 0)
			num /= x, cnt++;
	}
	if (num > 1) cnt++;
	return;
}
void Solve(int tc)
{
	int a, b, k, d1 = 0, d2 = 0;
	cin >> a >> b >> k;

	int gg = __gcd(a, b);

	Fact(a, d1);
	Fact(b, d2);

	// cout << gg << " " << b1 << " ";
	if (k == 1) {
		if (a == b) cout << "NO\n";
		else if (gg == a || gg == b) cout << "YES\n";
		else cout << "NO\n";
	}
	else if ((d1 + d2 >= k)) cout << "YES\n";
	else cout << "NO\n";
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Sieve();
	int T = 1;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}