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
    
    string s; cin >> s;
    int l = 0, r = 0, n = sz(s), ok = 0;
    char x = s[0], y;
    ll ans = 0;

    for(int i = 0; i < n; ){
        if(!ok){
            while(i < n and s[i] == x){
                i++, l++;
            }
            y = s[i];
            while(i < n and s[i] == y){
                i++, r++;
            }
            if(x + 1 == y) ans = min(l, r);
            l = r, x = y; ok = 1;
        }
        y = s[i]; r = 0;
        while(i < n and s[i] == y){
            r++; i++;
        }
        if(x + 1 == y) ans += min(l, r);
        l = r, x = y;
    }   

    cout << ans;
    
    return 0;
}