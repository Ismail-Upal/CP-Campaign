#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<int> v(n), pref(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i == 0) pref[i] = v[i];
        else pref[i] = max(v[i], pref[i - 1]);
    }

    int cnt = 0;
    for(int i = n - 1, j = n - 1; i >= 0; i--){
        if(v[i] == pref[j]){
            j = i - 1; cnt++;
        }
    }
    cout << cnt << endl;
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