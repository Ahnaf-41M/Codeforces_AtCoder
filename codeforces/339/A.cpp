#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,j;
    char temp;

    cin>>s;

    for(i = 0; i<s.length();i+=2)
    {
        for(j = i; j < s.length(); j+=2)
        {
            if(s[j]+48 <= s[i]+48)
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}
