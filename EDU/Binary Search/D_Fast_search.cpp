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
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    int k; cin>>k;
    while(k--){
        int xl, xr; cin>>xl>>xr;
        int l=-1, r=n;
        while(r>l+1){
            int m=l+(r-l)/2;
            if(v[m]<xl){
                l=m;
            }
            else if(v[m] >= xl){
                r=m;
            }
        }
        xl=r;
        l=-1, r=n;
        while(r>l+1){
            int m=l+(r-l)/2;
            if(v[m]<=xr){
                l=m;
            }
            else r=m;
        }
        xr=l;

        cout<<xr-xl+1<<' ';
    }
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}