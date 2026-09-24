#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    ll ab = 0, bc = 0, ca = 0, ok = 0;
    map<pair<int, int>, int> mp;
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            int x; cin >> x;
            mp[{i, i + j}] = x;
        }
    }

    for(int i = 1; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k <= n; k++){
                if(mp[{i, j}] + mp[{j, k}] < mp[{i, k}]) ok = 1;
            }
        }
    }

    if(ok) cout << "Yes";
    else cout << "No";
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