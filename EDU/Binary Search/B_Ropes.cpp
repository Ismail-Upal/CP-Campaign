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
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
double eps=1e-7;
dl n, k; 
vector<int>v;
bool good(dl x){
    int rop=0;
    for(int i=0; i<n; i++){
        rop+=floor(v[i]/x);
    }
    return rop>=k;
}
void solve(){
    cin>>n>>k;
    v.resize(n);
    for(int i=0; i<n; i++)cin>>v[i];
    dl l=0, r=1e8;
    for(int i=0; i<100; i++){
        dl m= l+(r-l)/2;
        if(good(m)){
            l=m;
        }
        else r=m;
    }

    cout<<setprecision(20)<<l;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}