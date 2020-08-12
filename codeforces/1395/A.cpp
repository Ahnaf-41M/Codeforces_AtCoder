#include<bits/stdc++.h>



#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)        for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int g,i,n;
int main()
{
    cin>>g;
    while(g--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a%2==0 && b%2==0 && c%2==0||a%2==0 && b%2==0 && d%2==0||a%2==0 && c%2==0 && d%2==0||
                b%2==0 && c%2==0 && d%2==0 ||a==b && b==c && c==d)
            cout<<"Yes\n";
        else
        {
            if(a>0 &&b>0 && c>0)
            {
                a--;
                b--;
                c--;
                d+=3;
                if(a%2==0 && b%2==0 && c%2==0||a%2==0 && b%2==0 && d%2==0||a%2==0 && c%2==0 && d%2==0||
                        b%2==0 && c%2==0 && d%2==0)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
            else
                cout<<"No\n";
        }
    }

}
