#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ll n,ans=1;
    cin>>n;
    ll mod = 1e9+7;
    for(ll i=0;i<n;i++)
    {
        ans = (ans%mod);
        ans = (ans * 2)%mod;
    }
    cout<<ans;
}

