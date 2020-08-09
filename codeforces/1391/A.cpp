#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int t,n,i,j;
int main()
{
    IOS


    cin>>t;

    W(t)
    {
        cin>>n;
        i = 1;j = n;

        while(i<=j)
        {
            if(i!=j)
                cout<<j<<" "<<i<<" ";
            else
                cout<<j<<" ";
            j--;
            i++;

        }
        cout<<endl;
    }

}
