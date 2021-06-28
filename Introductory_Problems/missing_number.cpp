#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll sum=0;

    for(ll i=1;i<=n;i++)
    {
        sum+=i;
    }

    ll t;

    for(ll i=0;i<n-1;i++)
    {
        cin>>t;
        sum -= t;
    }

    cout<<sum;
}