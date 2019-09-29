#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,p,j=0,k,l,c,g;
    vector<int> v;


    cin>>n>>m;


    for(i = n; i <= m; i++)
    {
        p = i;

        c=0;
        j=0;
        v.clear();
        while(p!=0)
        {
            g=p%10;
            v.push_back(g);
            p = p/10;
            j++;
        }
        for(k =0;k<v.size(); k++)
        {
            for(l=k+1; l<v.size(); l++)
            {
                if(v[k]==v[l])
                {
                    c=1;
                    break;
                }
            }

        }

        if(c==0)
            break;


    }
    if(c==1)
        cout<<"-1\n";
    else
        cout<<i<<endl;

        return 0;
}
