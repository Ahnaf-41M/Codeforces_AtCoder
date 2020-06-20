#include<bits/stdc++.h>


#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))

#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)    __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)       __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)       __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define PI   M_PI
#define endl "\n"


#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)

using namespace std;
using namespace __gnu_cxx;
int t,n,i;
int main()
{
    cin>>t;

    while(t--)
    {
        int cnt=0,d1,d2;
        int g=0;
        cin>>n;

        while(n!=1)
        {
            if(n&1)
            {
                n=1;
                cnt++;
                break;
            }
            else
            {
                g=0;
                for(i = 2; i <= sqrt(n); i++)
                {
                    if(n%i==0)
                    {
                        d1 = n/i;
                        d2 = i;
                        if(d1&1 && d2&1)
                        {
                            g = min3(g,d1,d2);
                        }
                        else
                        {
                            if(d1&1)
                            {
                                if(g && g>d1)
                                    g= d1;
                                else
                                    g = d1;
                            }
                            else if(d2&1)
                            {
                                if(g && g>d2)
                                    g= d2;
                                else
                                    g = d2;
                            }
                        }

                    }
                }
                if(g)
                {
                    n/=g;
                    cnt++;
                }
                if(n%2==0)
                {
                    n-=1;
                    cnt++;
                }
            }

        }
        if(cnt & 1)
            cout<<"Ashishgup\n";
        else
            cout<<"FastestFinger\n";
    }

    return 0;
}
