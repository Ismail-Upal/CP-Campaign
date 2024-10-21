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
// #define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6+6;
int h[N], dp[N], k;
int fun(int i){
    if(i==1)return 0;
    if(dp[i]!=-1)return dp[i];
    int cost = INT_MAX;
    for(int j=1; j<=k; j++){
        if((i-j) > 0)cost = min(cost, fun(i-j)+abs(h[i]-h[i-j]));
    }
    return dp[i]=cost;
}
int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    int n; cin>>n>>k;
    for(int i=1;i<=n; i++)cin>>h[i];
    cout<<fun(n);
    return 0;
}