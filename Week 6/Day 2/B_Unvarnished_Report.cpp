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
    string a, b; cin>>a>>b;
    if(a==b)cout<<0;
    else{
        int i=0, j=0;
        while(i<sz(a) || j<sz(b)){
            if(a[i]==b[i]){
                i++,j++;
            }
            else{
                cout<<i+1;
                break;
            }
        }
    }
}
int main()
{
    optimize();
    
        solve();

    return 0;
}