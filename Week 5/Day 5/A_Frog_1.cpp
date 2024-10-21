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
const int N = 1e6+5;
int h[N];
int dp[N];
int fun(int i){
    if(i==1)return 0;
    if(dp[i]!=-1)return dp[i];
    int c1=INT_MAX,c2=INT_MAX;
    c2 = fun(i-1)+abs(h[i]-h[i-1]);
    if(i>2) c1 = fun(i-2)+abs(h[i]-h[i-2]);
    return dp[i] = min(c1,c2);
}
int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    int n; cin>>n;
    for(int i=1; i<=n; i++)cin>>h[i];
    cout<<fun(n);
    return 0;
}