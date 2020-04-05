#include <bits/stdc++.h>
using namespace std;

#define ll long long
queue<ll>q;

int main()
{
    int k;
    cin >> k;
    for (int i = 1; i <= 9; i++)
        q.push(i);

    int j = 1;

    while (j < k)
    {
        ll p = q.front();
        q.pop();
        j++;

        ll u = p % 10;

        if (u != 0)
            q.push(p * 10 + u - 1);

        q.push(p * 10 + u);

        if (u != 9)
            q.push(p * 10 + u + 1);
    }
    cout << q.front() << endl;
}
