#include<bits/stdc++.h>
 
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define ll long long
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
 
int main()
{
    IOS
    string s = "aeiou";
    int k,i,r,c,j,l;
    bool flg=false;
 
    cin>>k;
    for(i = 2; i <= sqrt(k); i++)
    {
        if(k%i==0)
        {
             if(i>=5 && (k/i)>=5)
             {
                  r = i;
                  c = k/i;
                  for( j = 0; j < r; j++)
                  {
                       for(l = 0; l < c; l++)
                       {
                            cout<<s[(j+l)%5];
                       }
                  }
                  return 0;
             }
        }
    }
 
     cout<<-1<<endl;
 
    return 0;
}