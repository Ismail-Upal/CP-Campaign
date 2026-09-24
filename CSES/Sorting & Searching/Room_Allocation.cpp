#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        v.push_back({a, 1, i});
        v.push_back({b, -1, i});
    }

    auto cmp = [&](vector<int> a, vector<int> b){
        if(a[0] != b[0]) return a[0] < b[0];
        return a[1] > b[1];
    };
    sort(v.begin(), v.end(), cmp);

    int mx = 0, ans = 0;
    for(auto a : v){
        mx += a[1]; 
        ans = max(ans, mx); 
    }

    vector<int> mp(n, 0);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 1; i <= ans; i++) pq.push(i);

    for(auto a : v){
        if(a[1] == 1){
            mp[a[2]] = pq.top();
            pq.pop();
        }
        if(a[1] == -1){
            pq.push(mp[a[2]]);
        }
    }

    cout << ans << endl;
    for(auto i : mp) cout << i << " ";
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}