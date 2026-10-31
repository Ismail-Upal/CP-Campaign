#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    int m = 2 * n;
    vector<int> v(m + 1);
    for(int i = 1; i <= m; i++) cin >> v[i];

    vector<pair<int, int>> ans;
    
    ans.push_back({1, n});
    ans.push_back({n + 1, m});
    ans.push_back({n / 2 + 1, n + n / 2});

    ans.push_back({1, n});
    ans.push_back({n + 1, m});
    ans.push_back({n / 2 + 1, n + n / 2});

    if(n % 2){
        ans.push_back({1, n});
        ans.push_back({n + 1, m});
        ans.push_back({n / 2 + 1, n + n / 2});    
    }

    cout << sz(ans) << endl;
    for(auto [i, j] : ans) cout << i << " " << j << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        Solve();
    }
    
    return 0;
}

