#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, l, r; cin >> n >> l >> r;
    string s; cin >> s;
    set<char> se;
    for(auto i : s) se.insert(i);

    ll ans = 0;
    for(auto c : se){
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(s[i] == c) v.push_back(i);
        }
       
        for(int i : v){
            int lo = lower_bound(v.begin(), v.end(), l + i) - v.begin();
            int hi = lower_bound(v.begin(), v.end(), r + i) - v.begin();
            
            if(lo == sz(v) or v[lo] > r + i) continue;
            if(hi == sz(v) or v[hi] > r + i) hi--;
            if(lo > hi) continue;

            ans += hi - lo + 1;
        }
    }

    cout << ans;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}