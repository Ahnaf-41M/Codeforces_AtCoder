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
    deque<int> ans;
    cin >> n;

    int right = n - 1;
    while (right > -1) {
        int sq = ceil(sqrt(right));
        sq *= sq;
        int left = sq - right;
        for (int i = right; i >= left; i--)
            ans.push_front(sq - i);
        right = left - 1;
    }
    for (int x : ans) cout << x << " ";
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