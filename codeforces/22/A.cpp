#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    set<int>:: iterator it;
    int x,i,t;

    cin>>t;

    for(i = 0; i < t; i++)
    {
        cin>>x;
        s.insert(x);
    }
    it = s.begin();
    it++;
    if(s.size()>1)
        cout<<*it<<endl;
    else
        cout<<"NO\n";


}
