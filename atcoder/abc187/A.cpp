#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define endl  "\n"
using namespace std;

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   
   int n,t,k;
   string s;

   cin>>n>>k;
   int a=0,b=0;

   while(n){
      a+=(n%10);
      n/=10;
   }
    while(k){
      b+=(k%10);
      k/=10;
   } 
   cout << max(a,b);  
   return 0;
}