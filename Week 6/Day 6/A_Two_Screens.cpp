//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
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

    string s, t; cin>>s>>t;
    int cnt=0;
    int i=0, j=0;

    while(i<sz(s) or j<sz(t)){
        if(s[i]==t[j]){
            cnt++;
        }
        else break;

        i++,j++;
    }
    //cout<<cnt<<endl;
    ll ans=cnt+sz(s)-cnt+sz(t)-cnt;
    if(cnt!=0)ans++;
    cout<<ans<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}