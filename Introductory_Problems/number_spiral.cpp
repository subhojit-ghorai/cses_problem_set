#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll diag(ll val)
{
    ll ans = 1;
    for(ll i=1;i<val;i++)
    {
        ans = ans + 2*i;
    }
    return ans;
}

int main()
{
    ll t,x,y;
    cin>>t;

    ll initial_diag_val = 1;

    while(t--)
    {
        cin>>y>>x;

        ll max_y = max(x,y);

        ll diag_val = 1 + max_y*(max_y-1);

        if(max_y%2 != 0)
        {
            if(y<x)
            {
                cout<<diag_val + (x-y)<<endl;
            }
            else
            {
                cout<<diag_val - (y-x)<<endl;
            }
        }
        else
        {
            if(y<x)
            {
                cout<<diag_val - (x-y)<<endl;
            }
            else
            {
                cout<<diag_val + (y-x)<<endl;
            }
        }

    }
}

