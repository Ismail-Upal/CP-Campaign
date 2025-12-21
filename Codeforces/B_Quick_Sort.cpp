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
        map<int, int> mp;
        mp[0]++;
        int ans = 0;
        for(int i = 0; i < n; i++){
            mp[v[i]]++;
            if(!mp[v[i] - 1]) ans = max(ans, n - v[i] + 1);
        }
        cout << (ans + k - 1) / k << endl;
    }
    
    return 0;
}