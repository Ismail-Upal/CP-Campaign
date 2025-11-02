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
    vector<int> v(n);
    int mn = 1e9;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    int l = -1, r = -1, ans = 1e9;
    for(int i = 0; i < n; i++){
        if(v[i] == mn){
            if(l == -1) l = i;
            else if(r == -1) r = i;
            else l = r, r = i;
            if(r != -1) ans = min(ans, r - l);
        }
    }

    cout << ans ;
    
    return 0;
}