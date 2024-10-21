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
    string n; cin>>n;
    ll sum=0, ans=0;
    while(sz(n)>1){
        for(int i=0; i<sz(n); i++){
            sum+=n[i]-'0';
        }
        n=to_string(sum); //cout<<n<<endl;
        sum=0;
        ans++;
    }
    cout<<ans;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}