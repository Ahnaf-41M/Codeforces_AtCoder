#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,brk=0;
    string s;
    cin>>s;

    int a,b,c,l;
    l = s.size();
    a = (l-1)/2;
    a;
    b = (l+3)/2;
    b;
    if(l%2==0)
        cout<<"No\n";
    else
    {

        for(i = 0,j=l-1; i < l,j>=0; i++,j--)
        {
            if(s[i]!=s[j])
            {
                brk=1;
                break;
            }
        }
        if(brk==1)
            cout<<"No\n";
        else
        {
            for(i = 0,j=a-1; i < a,j>=0; i++,j--)
            {
                if(s[i]!=s[j])
                {
                    brk=1;
                    break;
                }
            }
            if(brk==1)
                cout<<"No\n";
            else
            {
                for(i = b-1,j=l-1; i<l,j>=b-1; i++,j--)
                {
                    if(s[i]!=s[j])
                    {
                        brk=1;
                        break;
                    }
                }
                if(brk==1)
                    cout<<"No\n";
                else
                    cout<<"Yes\n";
            }
        }
    }
}
