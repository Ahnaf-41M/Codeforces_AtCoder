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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = a * d, y = b * c;
    if (!a || !c) {
        if (x == y) cout << "0\n";
        else cout << "1\n";
        return;
    }
    if (x == y) cout << "0\n";
    else if (x % y == 0 || y % x == 0) cout << "1\n";
    else cout << "2\n";
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