#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll sum = (n*(n+1))/2;

    if(sum%2==0)
    {
        sum = sum/2;
        vector<ll>arr,brr;
        while(sum>0)
        {
            if(sum>=n)
            {
                sum = sum - n;
                arr.push_back(n);
            }
            else
            {
                brr.push_back(n);
            }
            n--;
        }
        while(n>0)
        {
            brr.push_back(n);
            n--;
        }
        cout<<"YES"<<endl;
        cout<<arr.size()<<endl;
        for(ll i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        cout<<brr.size()<<endl;
        for(ll i=0;i<brr.size();i++)
        {
            cout<<brr[i]<<" ";
        }

    }
    else
    {
        cout<<"NO";
    }
}

