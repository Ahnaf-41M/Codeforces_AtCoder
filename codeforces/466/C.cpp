#include <bits/stdc++.h>

using namespace std;

int a[1000010];
long long cnt[1000010];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 3 != 0)
        cout << "0\n";
    else {
        s /= 3;
        //cout<<s<<endl;
        long long ss = 0;
        for(int i = n-1; i >= 0 ; i--)
        {
            ss += a[i];
            if (ss == s)
                cnt[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; i--)
            {
                 //cout<<cnt[i]<<" ";
                 cnt[i] += cnt[i+1];
                 //cout<<cnt[i+1]<<endl;
            }

        long long ans = 0;
        ss = 0;
        for(int i = 0 ; i+2 < n ; ++i) {
            ss += a[i];
            if (ss == s)
                ans += cnt[i+2];
        }
        cout << ans << "\n";
    }
    return 0;
}
