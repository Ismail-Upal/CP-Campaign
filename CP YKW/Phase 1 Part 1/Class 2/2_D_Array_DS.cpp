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
const int N=1e3;
int a[N][N];
ll func(int i, int j){
    return a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];

}
int main()
{
    optimize();
 
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            cin>>a[i][j];
        }
    }
    ll ans = INT_MIN;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            ans = max(ans,func(i,j));
        }
    }
    cout<<ans;
    return 0;
}