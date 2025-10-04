//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
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
    ll n; cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll q; cin>>q;
    while(q--){
        ll x; cin>>x;
        int lo=lower_bound(v.begin(), v.end(), x)-v.begin()-1;
        int up=upper_bound(v.begin(), v.end(), x)-v.begin();
        if(lo<0)cout<<"X"<<" "<<v[up];
        else if(up==n)cout<<v[lo]<<" "<<"X"<<endl;
        else cout<<v[lo]<<" "<<v[up]<<endl;
    }
    return 0;
}