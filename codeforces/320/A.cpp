#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,c=0;
    string s;

    cin>>s;

    for(i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')
        {
            if(s[i+1]=='4')
            {
                 if(s[i+2]=='4')
                 {
                      i+=2;
                      continue;
                 }
                 i++;
                 continue;

            }
            continue;
        }
        else
        {
            c=1;
            break;
        }

    }
    if(c==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";

}
