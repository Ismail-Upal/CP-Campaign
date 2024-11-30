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
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    int n, l, r, x; cin>>n>>l>>r>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int ans = 0; 
    for(int mask = 0; mask < (1<<n); mask++){
        int total = 0, mn = INT_MAX, mx = INT_MIN, cnt =0;
        for(int k=0; k<n; k++){
            if(mask & (1<<k)){
                total += v[k];
                mn = min(mn, v[k]);
                mx = max(mx, v[k]);
                cnt++;
            }
        }
        if(total>=l and total<=r and mx-mn>=x and cnt>=2){
            ans++;
        }
    }
    cout<<ans;
 
    return 0;
}