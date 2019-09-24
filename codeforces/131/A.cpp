#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char u;
    int c=0;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            c = 1;
        }
    }

    if(c == 0)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
    return 0;
}
