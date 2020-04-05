#include <bits/stdc++.h>
using namespace std;

#define ll long long
queue<ll>m;

int main()
{
    int k;
    cin >> k;
    for (int i = 1; i <= 9; i++)
        m.push(i);

    int j = 1;

    while (j < k)
    {
        ll p = m.front();
        m.pop();
        j++;

        ll u = p % 10;

        if (u != 0)
            m.push(p * 10 + u - 1);

        m.push(p * 10 + u);

        if (u != 9)
            m.push(p * 10 + u + 1);
    }
    cout << m.front() << endl;
}
