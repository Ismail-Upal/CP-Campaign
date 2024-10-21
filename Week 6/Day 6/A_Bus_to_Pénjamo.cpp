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
    int n, r; cin>>n>>r;
    int vac=0, bad=0;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {   cin>>v[i];
        vac+=v[i];
    }
    
    sort(v.rbegin(), v.rend());
    int ans=0, b=0;
    for(int i=0; i<n; i++){
        if(v[i]>=2){
            int man = v[i]- v[i]%2;
            ans+=man;
            r-= man/2;

            b+= v[i]-man;
        }
        else{
            b+=v[i];
        }
    }
    if(r>=b)ans+=b;
    else ans+=(2*r) - b;
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