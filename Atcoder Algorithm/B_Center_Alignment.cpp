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
    vector<string> v(n);
    ll mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mx = max(mx, sz(v[i]));
    }
    for(int i = 0; i < n; i++){
        if(sz(v[i]) == mx) cout << v[i] << endl;
        else{
            string t = "";
            for(int j = 1; j <= (mx - sz(v[i])) / 2; j++){
                t += ".";
            }
            t += v[i];
            for(int j = 1; j <= (mx - sz(v[i])) / 2; j++){
                t += ".";
            }
            cout << t << endl;
        }
    }
    
    return 0;
}