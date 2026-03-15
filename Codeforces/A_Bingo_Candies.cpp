#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    map<int, int> mp;
    int ok = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            mp[x]++;
            if(mp[x] > n * n - n) ok = 0;
        }
    }

   
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}
