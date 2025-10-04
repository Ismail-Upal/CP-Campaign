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
        int n, x; cin >> n >> x; x--;
        string s; cin >> s;

        int l = -1, r = n;
        for(int i = x - 1; i >= 0; i--){
            if(s[i] == '#'){
                l = i; break;
            }
        }
        for(int i = x + 1; i < n; i++){
            if(s[i] == '#'){
                r = i; break;
            }
        }

        if(l == -1 and r == n){
            cout << 1 << endl;
            continue;
        }
        // cout << l << r << endl;
        int ans = max(min(x + 1, n - r + 1), min(n - x, l + 2));
        cout << ans << endl;
    }
    
    return 0;
}