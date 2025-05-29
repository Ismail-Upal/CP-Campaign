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
    
    tc{
        int n; cin >> n;
        string s; cin >> s;
        vector<int> mp(n + 1);
        for(int i = 0; i < n; i++){
            if(s[i]== '0'){
                mp[i + 1] = -1;
            }
            else mp[i + 1] = 0;
        }
        
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j += i){
                if(mp[j] == -1){
                    ans += i;
                    mp[j] = 1;
                }
                else if(mp[j] == 0) break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}