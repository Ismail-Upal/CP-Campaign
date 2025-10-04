#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll>v(n);
        map<int,int>mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1){cout<<"YES"<<endl;continue;}
        ll mx=*max_element(v.begin(), v.end());
        ll ans=1;
        for(ll i=0;i<n;i++){
            if(v[i]==mx)continue;
            ll j=mx-v[i];
            if(j==v[i]&& mp[j]>1)ans=1;
            else if(j!=v[i] && mp[j]>0)ans=1;
            else {
                ans=0;break;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}