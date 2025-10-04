#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using order_set=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
// int lo = se.order_of_key(x), auto it = se.find_by_order(idx)
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    order_set<int> se;
    se.insert(9); se.insert(2); se.insert(4); se.insert(5);
    for(auto i : se) cout << i << ' ';  cout << endl;

    cout << se.order_of_key(9);
    return 0;
}