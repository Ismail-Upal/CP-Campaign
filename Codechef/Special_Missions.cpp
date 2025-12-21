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
        int n, c; cin >> n >> c;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s;
        ll ans = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') ans += a[i];
        }
        if(ans >= c){
            int ok = 0, sum = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    sum += a[i]; ok = 1;
                }
            }
            if(ok) ans = max(ans, ans + sum - c);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}