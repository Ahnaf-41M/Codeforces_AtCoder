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
    int n;
    string s;

    cin >> n >> s;
    int ar[n];
    for (int &x : ar) cin >> x;

    int i = 0, j = -1, ans = 0;
    while (i < n) {
        if (s[i] == '0') j = i;
        else if (j >= 0 && ar[i] < ar[j]) {
            swap(s[i], s[j]);
            j = i;
        }
        i++;
    }
    for (int i = 0; i < n; i++) if (s[i] == '1') ans += ar[i];
    cout << ans << "\n";
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