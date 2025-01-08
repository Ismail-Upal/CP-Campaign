#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        set<int> se;
        map<int, int>mp;
        for(int i = 0; i < n; i++){
            int l, r; cin >> l >> r;
            if(l == r) mp[l]++, se.insert(l);
            v[i] = {l, r};
        }
        string s = "";
        vector<int> vec(se.begin(), se.end()); 
        for(int i = 0; i < n; i++){
            int l = v[i].first, r = v[i].second;
            if(l == r){
                if(mp[l] > 1) s += '0';
                else s += '1';
            }
            else{
                int sz = r - l + 1;
                int lo = lower_bound(vec.begin(), vec.end(), l) - vec.begin();
                int up = lower_bound(vec.begin(),vec.end(), r) - vec.begin();
                // cout << lo << " " << up << endl;
                if(lo < sz(vec) and up < sz(vec) and vec[lo] == l and vec[up] == r){
                    if(up - lo + 1 == sz) s += '0';
                    else s += '1';
                }
                else s += '1';
            }
        }
        cout << s << endl;
    }
    
    return 0;
}