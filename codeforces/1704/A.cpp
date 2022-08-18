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
    int n, m;
    char f;
    string s1, s2;
    cin >> n >> m;

    deque<char> q1, q2;
    cin >> s1 >> s2;
    f = s2[0];
    for (char ch : s1) q1.pb(ch);
    for (char ch : s2) q2.pb(ch);

    while (q1.size() > 1 && q1 != q2) {
        char x = q1.front(); q1.pop_front();
        char y = q1.front(); q1.pop_front();
        if (f == '1') q1.push_front(max(x, y));
        else q1.push_front(min(x, y));
    }
    cout << (q1 == q2 ? "YES\n" : "NO\n");
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