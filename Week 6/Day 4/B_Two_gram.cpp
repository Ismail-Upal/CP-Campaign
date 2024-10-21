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
    int n, mx=0; cin>>n;
    string s; cin>>s;
    map<string,int>mp;
    string ans;
    for(int i=0; i<n-1; i++){
        string t=s.substr(i,2);
        mp[t]++;
        if(mp[t]>mx){
            mx=mp[t];
            ans=t;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}