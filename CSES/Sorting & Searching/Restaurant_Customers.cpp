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
    
    int n; cin >> n; 
    vector<pair<int, int>> v(2 * n);
    for(int i = 0, j = 0; i < n; i++, j += 2){
        int a, b; cin >> a >> b;
        v[j] = {a, 1}; v[j + 1] = {b, -1};
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0, s = 0; i < 2 * n; i++){
        s += v[i].second; 
        ans = max(ans, s);
    }    
    cout << ans ;

    return 0;
}