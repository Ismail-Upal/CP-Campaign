#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)

void solve(){
    ll a,b; cin>>a>>b;
    ll xk, yk; cin>>xk>>yk;
    ll xq, yq; cin>>xq>>yq;
    ll ans=0;
    vector<int>l={1,1,-1,1};
    vector<int>r={0,-1,-1,-1,0,1,1,1};

    map<pair<int,int>, int>mp;
    for(int i=0; i<8; i++){
        int x1=xk+(a*l[i]);
        int y1=yk+(b*r[i]);

        int x2=xq+(a*l[i]);
        int y2=yq+(b*r[i]);

        mp[{x1,y1}]++;
        mp[{x2,y2}]++;
    }
    for(auto i:mp)if(i.second>1){cout<<i.second<<endl;return;}
    map<pair<int,int>, int>mp1;
    for(int i=0; i<8; i++){
        int x1=xk+(b*l[i]);
        int y1=yk+(a*r[i]);

        int x2=xq+(b*l[i]);
        int y2=yq+(a*r[i]);

        mp1[{x1,y1}]++;
        mp1[{x2,y2}]++;
    }
    for(auto i:mp1)if(i.second>1){cout<<i.second<<endl;return;}
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}