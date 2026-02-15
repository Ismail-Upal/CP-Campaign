#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int l, t; cin >> l >> t;
        int r = l + t;
        l -= m;

        v.push_back({l, +1});
        v.push_back({r, -1});
    }

    sort(v.begin(), v.end(), cmp);

    int ans = 0, sum = 0;

    for(auto [i, j] : v){
        sum += j;
        ans = max(ans, sum);
    }

    cout << ans;
    
    return 0;
}