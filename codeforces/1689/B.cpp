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

    int ar[n + 1], b[n + 1], pos[n + 1];
    rep(i, 1, n) {
        cin >> ar[i];
        b[i] = -1;
        pos[ar[i]] = i;
    }

    if (n == 1) {
        cout << "-1\n";
        return;
    }
    rep(i, 1, n) {
        bool done = 0;
        rep(j, 1, n) {
            if (ar[j] != i && b[j] == -1) {
                b[j] = i;
                done = 1;
                break;
            }
        }
        if (!done) {
            b[pos[i]] = i;
            swap(b[pos[i]], b[pos[i] - 1]);
        }
    }
    rep(i, 1, n) cout << b[i] << " ";
    cout << "\n";
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