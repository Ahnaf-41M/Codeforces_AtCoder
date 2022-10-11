#include <bits/stdc++.h>
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int lcm(int x, int y)
{
    return (x * y) / __gcd(x, y);
}
void Solve(int tc)
{
    int n;
    cin >> n;

    int ar[n];
    for (int &x : ar) cin >> x;

    int cur = ar[n - 1], last = ar[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (__gcd(ar[i], cur) != ar[i]) {
            cur = lcm(ar[i], cur);
            if (__gcd(cur, last) != ar[i + 1]) {
                cout << "NO\n";
                return;
            }
        }
        last = cur;
        cur = ar[i];
    }
    cout << "YES\n";
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