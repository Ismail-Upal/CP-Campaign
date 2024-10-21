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
    int n , m ,q; cin>>n>>m>>q;
    int m1,m2; cin>>m1>>m2;
    if(m1>m2)swap(m1,m2);
    int q1; cin>>q1;
    if(q1>m1 && q1<m2){
        int k=m2-m1-1;
        if(k%2==0)cout<<k/2<<endl;
        else cout<<k/2 +1<<endl;
    }
    else if(q1>m1 && q1>m2){
        cout<<(n-m2)<<endl;
    }
    else if(q1<m1 && q1<m2){
        cout<<(m1-1)<<endl;
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