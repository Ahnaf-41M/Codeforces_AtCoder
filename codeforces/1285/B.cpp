#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, i, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        ll a[n], sum = 0;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll cur_sum = 0, cur_max = 0, ans1 = 0, ans2 = 0;
        for (i = 0; i < n - 1; i++)
        {
            cur_sum += a[i];

            cur_max = max(cur_max, cur_sum);
            if (cur_sum < 0)
                cur_sum = 0;
        }
        ans1 = cur_max;
        cur_sum = 0, cur_max = 0;
        for (i = 1; i < n; i++)
        {
            cur_sum += a[i];

            cur_max = max(cur_max, cur_sum);
            if (cur_sum < 0)
                cur_sum = 0;
        }
        ans2 = cur_max;
        if (ans1 >= sum || ans2 >= sum)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}