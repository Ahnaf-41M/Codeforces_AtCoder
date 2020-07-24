#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep1(i,n)       for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
ll n,g,i,j;
int main()
{
     IOS

     cin>>g;

     while(g--)
     {
          cin>>n;
          int b[n];
          string s="",ans="";

          rep1(i,n)
               cin>>b[i];
          int mx = *max_element(b,b+n);
          for(i = 1; i <= 2*mx; i++)
               s+="a";
          if(mx==0)
               s = "a";
          cout<<s<<endl;
          int k =0;
          for(i = 0; i < n; i++)
          {
               k=0;
               for(j = 0; j < s.size(); j++)
               {
                    if(k < b[i])
                    {
                         cout<<s[j];
                         k++;
                    }
                    else
                    {
                         for(char hh = 'a'; hh <= 'z'; hh++)
                         {
                              if(hh!=s[k])
                              {
                                   cout<<hh;
                                   s[j] = hh;
                                   break;
                              }
                         }

                    }
               }
               cout<<endl;

          }
     }

     return 0;
}
