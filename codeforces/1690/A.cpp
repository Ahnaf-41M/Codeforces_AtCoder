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
    int n;
    cin >> n;

    int h1 = 3, h2 = 2, h3 = 1;

    while (h1 + h2 + h3 != n) {
        if (h2 - h3 == 1 && h1 - h2 == 1) h1++;
        else if (h1 - h2 > 1) h2++;
        else h3++;
    }
    cout << h2 << " " << h1 << " " << h3 << "\n";
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