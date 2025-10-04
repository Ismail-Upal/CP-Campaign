#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, k; cin >> n >> k;
    vector<int> pref(n + 2, 0);
    while(k--){
        int a, b; cin >> a >> b;
        pref[a]++;
        pref[b + 1]--;
    }

    for(int i = 1; i <= n; i++){
        pref[i] += pref[i - 1];
    }
    for(int i = 1; i <= n; i++){
        cout << pref[i] << " ";
    }
    
    return 0;
}