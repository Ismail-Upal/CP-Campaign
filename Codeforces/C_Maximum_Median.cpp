//https://codeforces.com/problemset/problem/1201/C
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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(), v.end());
    auto ok=[&](ll mid){
        ll cnt=0;
        for(ll i=(n/2); i<n; i++){
            if(v[i]<mid){
                cnt+=mid-v[i];
            }
            else cnt+=0;
        }
        return cnt<=k;
    };
    ll l=0, r=2e9, mid, ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}