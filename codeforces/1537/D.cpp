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

bool OK[MX];
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
void Solve(int tc)
{
	int n, turn = 0, ok = 1;
	cin >> n;

	while (ok) {
		ok = 0;
		turn ^= 1;
		if (n & 1) {
			for (int x : primes) {
				if (x * x > n) break;
				if (n % x == 0 && n != x) {
					n -= (n / x), ok = 1;
					break;
				}
			}
		}
		else {
			int tmp = n, p_2 = 1;
			while (tmp % 2 == 0)
				tmp /= 2, p_2 *= 2;
			if (tmp == 1) {
				if (p_2 > 2)
					n -= n / 2, ok = 1;
			}
			else {
				ok = 1;
				n -= n / p_2;
			}
		}
	}
	cout << (turn ? "Bob\n" : "Alice\n");
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