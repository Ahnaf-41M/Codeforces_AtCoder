#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           3000005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

bool OK[MX];
int divs[MX], prime_pos[MX];
void Sieve()
{
    int k = 1;
    OK[2] = 1;
    for (int i = 3; i < MX; i += 2)
        OK[i] = 1;
    for (int i = 2; i < MX; i++) {
        if (OK[i]) prime_pos[i] = k++;
        for (int j = i + i; j < MX; j += i) {
            OK[j] = 0;
            divs[j] = i;
        }
    }

}
void Solve(int tc)
{
    int n;
    multiset<int> s;
    vector<int> ans;
    cin >> n;

    rep(i, 1, 2 * n) {
        int x; cin >> x;
        s.insert(x);
    }
    while (!s.empty()) {
        auto it = s.end(); it--;
        if (OK[(*it)]) {
            ans.pb(prime_pos[(*it)]);
            s.erase(s.find(prime_pos[(*it)]));
        }
        else {
            ans.pb((*it));
            s.erase(s.find(divs[(*it)]));
        }
        s.erase(it);
    }
    for (int x : ans) cout << x << " ";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Sieve();
    // cout << primes.size() << "\n" << primes.back() << "\n";
    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}