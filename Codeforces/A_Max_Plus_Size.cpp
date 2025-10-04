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
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int mx=*max_element(a, a+n);
    int idx=max_element(a,a+n)-a;
    if(n%2==0)cout<<mx+n/2<<endl;
    else{
        int m1=0;
        for(int i=0; i<n; i+=2)m1=max(m1, a[i]);
        int m2=0;
        for(int i=1; i<n; i+=2)m2=max(m2, a[i]);
        if(m1>=m2)cout<<m1+n/2+1<<endl;
        else cout<<m2+n/2<<endl;
    }
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}