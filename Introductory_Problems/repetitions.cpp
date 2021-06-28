#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string str;
    cin>>str;
    
    ll ans=1,max_ans=1;

    for(ll i=1;i<str.size();i++)
    {
        if(str[i-1] == str[i])
        {
            ans++;
        }
        else{
            ans = 1;
        }

        max_ans = max(ans,max_ans);
    }
    cout<<max_ans;
}