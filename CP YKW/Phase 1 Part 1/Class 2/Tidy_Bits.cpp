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
 
    unsigned int n; cin>>n;
    int cnt=0;
    // for(int i=0; i<32; i++){
    //     if(n & (1u<<i))cnt++;
    // }
    // int ans=0;
    // for(int i=0; i<cnt; i++){
    //     ans += 1u<<i;
    // }
    cnt = __builtin_popcount(n);
    int ans =((1 << cnt) - 1);
    cout<<ans<<endl;
 
    return 0;
}