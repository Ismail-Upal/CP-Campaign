#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc ll t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,m; cin>>n>>m;
    ll a[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m;j++){
            a[i][j]=2;
        }
    }
    if(n>m){
        for(int i=0; i<m; i++){
            a[i][i]=3;
        }
        for(int i=m; i<n; i++)a[i][0]=3;
    }
    else {
        for(int i=0; i<n; i++)a[i][i]=3;
        for(int i=n; i<m; i++)a[0][i]=3;
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main()
{
    optimize();
    
    tc{
        solve();
    }
    return 0;
}