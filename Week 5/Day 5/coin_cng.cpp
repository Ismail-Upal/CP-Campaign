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
const int N=1e6+4;
int coin[N],dp[N];
int func(int amount, int n){
    if(amount  ==0)return 0;
    if(dp[amount]!=-1)return dp[amount];
    int ans=INT_MAX;
    for(int i=1; i<=n; i++){
        if(amount-coin[i] >= 0)
            ans = min(ans+0LL, func(amount-coin[i], n)+1LL);
    }
    return dp[amount]=ans;
}
int main()
{
    optimize();
    memset(dp,-1, sizeof(dp));
    int a,n;cin>>a>>n;
    for(int i=1; i<=n; i++)cin>>coin[i];
    cout<<func(a,n);
    return 0;
}