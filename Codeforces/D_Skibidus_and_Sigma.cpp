#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        vector<vector<int>> v;
        for(int i = 0; i < n; i++){
            vector<int> a(m);
            for(int j = 0; j < m; j++){
                cin >> a[j];
            }
            v.push_back(a);
        }
        auto cmp = [&](vector<int> &a, vector<int> &b){
            ll sa = 0, sb = 0;
            for(auto i : a) sa += i;
            for(auto i : b) sb += i;
            if(sa > sb) return true;
            else return false;
        };
        sort(v.begin(), v.end(), cmp);
        ll sum = 0;
        vector<ll> ans;
        for(auto b : v){
            for(int i = 0; i < m; i++){
                sum += b[i];
                ans.push_back(sum);
            }
        }

        cout << accumulate(ans.begin(), ans.end(), 0LL) << endl;
    }
    
    return 0;
}