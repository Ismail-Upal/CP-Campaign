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
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n; cin>>n;
    int a=10;
    int v=pow(3,a);
    vector<ll>ans;
    while(n>0){
        v=pow(3,a);
        if(v>n){a--;continue;}
        n=n%v;
        ans.push_back(log10(v)/log10(3));
    }
    while(n>0){
        ans.push_back(0);
        n--;
    }
    cout<<sz(ans)<<endl;
    for(auto i:ans)cout<<i<<" ";
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}