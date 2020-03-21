#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll n,i,min_e,idx;
     cin>>n;

     ll a[n];

     for(i = 0; i < n; i++)
     {
          cin>>a[i];
     }
     ll c=0;
     min_e = *min_element(a,a+n);

     for(i = 0; i < n; i++)
     {
          if(a[i]==min_e)
          {
               idx = i+1;
               c++;
          }
     }
     if(c>1)
          cout<<"Still Rozdil\n";
     else
          cout<<idx<<endl;

}
