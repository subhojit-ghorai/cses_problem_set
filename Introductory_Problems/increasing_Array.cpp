#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

int main()
{
    ll n,t;
    cin>>n;

    vector<ll> arr;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    
    ll ans = 0;

    for(ll i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            ans += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout<<ans;
}