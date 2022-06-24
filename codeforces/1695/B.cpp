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
    int n, mn1 = 1e15, mn2 = 1e15, p1 = -1, p2 = -1;
    cin >> n;
    int ar[n];
    rep(i, 0, n - 1) {
        cin >> ar[i];
        if (i & 1) {
            if (mn2 > ar[i])
                mn2 = ar[i], p2 = i;
        }
        else {
            if (mn1 > ar[i])
                mn1 = ar[i], p1 = i;
        }
    }

    if (n & 1) cout << "Mike\n";
    else {
        if (mn1 > mn2) cout << "Mike\n";
        else if (mn1 < mn2) cout << "Joe\n";
        else {
            if (p2 < p1) cout << "Mike\n";
            else cout << "Joe\n";
        }
    }
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