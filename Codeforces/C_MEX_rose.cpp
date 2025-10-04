#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int dup = 0;
        set<int> se;
        for(int i = 0; i < n; i++){
            if(v[i] < k) se.insert(v[i]);
            if(v[i] == k) dup++;
        }

        int ans = 0;
        int nd = k - sz(se);
        if(nd == 0) ans = dup;
        else{
            ans += dup;
            if(dup < nd){
                ans += nd - dup;
            } 
        }

        if(k == 0) ans = dup;
        cout << ans << endl;
    }
    
    return 0;
}