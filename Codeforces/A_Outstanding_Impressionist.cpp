#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> l(n), r(n);
        map<int, int> mp;
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> l[i] >> r[i];
            if(l[i] == r[i]){
                mp[l[i]]++;
                v.push_back(l[i]);
            }
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        for(int i = 0; i < n; i++){
            if(l[i] != r[i]){
                int lo = lower_bound(v.begin(), v.end(), l[i]) - v.begin();
                int hi = lower_bound(v.begin(), v.end(), r[i]) - v.begin();
                if(lo < sz(v) and hi <sz(v) and v[lo] == l[i] and v[hi] == r[i] and hi - lo + 1 == r[i] - l[i] + 1){
                    cout << 0;
                }
                else cout << 1 ;
            }
            else{
                if(mp[l[i]] > 1) cout << 0 ;
                else cout << 1 ;
            }
        }
        cout << endl;
    }
    
    return 0;
}