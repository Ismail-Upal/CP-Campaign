#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int mod = 1e9 + 7;
int main()
{   
    opt();
    
    int n; cin >> n;
    string s; cin >> s;

    ll zer = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            zer++;
        }
    }
    ll ans = 1;
    for(int i = 1; i <= zer; i++){
        ans *= 2;
        ans %= mod;
    }
    cout << ans - 1;
    
    return 0;
}