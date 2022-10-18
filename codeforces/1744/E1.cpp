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

void Solve(int tc)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int val = a * b;
    for (int x = a + 1; x <= c; x++) {
        int y = val / __gcd(val, x);
        y = (d / y) * y;
        if (y > b) {
            cout << x << " " << y << "\n";
            return;
        }
    }
    cout << "-1 -1\n";
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