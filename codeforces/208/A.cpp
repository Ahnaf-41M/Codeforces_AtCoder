#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,tk=0;
    cin>>s;

    for(i = 0; i < s.size(); i++)
    {
        if(s[i]=='W')
        {
            if(s[i+1]=='U')
            {
                if(s[i+2]=='B')
                {
                    if(tk!=0)
                        cout<<" ";
                    i+=2;
                    continue;
                }
                else
                {
                    cout<<s[i];
                    tk++;
                }

            }
            else
            {
                cout<<s[i];
                tk++;
            }
        }
        else
        {
            cout<<s[i];
            tk++;
        }
    }
    cout<<endl;
}
