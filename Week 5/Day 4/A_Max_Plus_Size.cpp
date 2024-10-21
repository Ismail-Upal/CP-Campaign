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
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n; i++)cin>>v[i];
    int m1=INT_MIN, c1=0;
    for(int i=1;i<=n; i+=2){
        m1=max(m1,v[i]);
        c1++;
    }
    m1+=c1;
    int m2=INT_MIN, c2=0;
    for(int i=2;i<=n;i+=2){
        m2=max(m2,v[i]);
        c2++;
    }
    m2+=c2;

    cout<<max(m2,m1)<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}

