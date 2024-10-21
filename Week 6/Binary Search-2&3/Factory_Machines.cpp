//https://cses.fi/problemset/task/1620/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,t; cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    auto ok=[&](ll m){
        ll total=0;
        for(int i=0;i<n;i++){
            total+=(m/v[i]);
            if(total>=t)return true;
        }
        return false;
    };
    ll l=1, r=1e18, ans, mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}