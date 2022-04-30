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

    int ar[n + 1];
    rep(i, 1, n) cin >> ar[i];

    int need = 0, left = -1, right = -1;
    rep(i, 1, n) {
        if (ar[i] != i) {
            need = i, left = i;
            break;
        }
        cout << ar[i] << " ";
    }
    rep(i, 1, n) if (need == ar[i]) right = i;
    if (left != -1) {
        irep(i, right, left) cout << ar[i] << " ";
        rep(i, right + 1, n) cout << ar[i] << " ";
    }
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