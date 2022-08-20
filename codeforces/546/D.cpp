#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           5000005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int nxt[MX], ans[MX];

void Sieve()
{
    for (int i = 2; i < MX; i++)
        nxt[i] = i;
    for (int i = 2; i < MX; i++) {
        if (nxt[i] == i) {
            for (int j = i * i; j < MX; j += i) {
                if (nxt[j] == j)
                    nxt[j] = i;
            }
        }
    }
    for (int i = 2; i < MX; i++) {
        ans[i] += ans[i - 1];
        int x = i;
        while (x > 1) {
            int d = nxt[x];
            while (x % d == 0)
                x /= d, ans[i]++;
        }
    }
}
void Solve(int tc)
{
    int a, b;
    cin >> a >> b;
    cout << ans[a] - ans[b] << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Sieve();
    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}