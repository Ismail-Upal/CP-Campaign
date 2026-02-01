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

        int ans = 1e9;
        for(char c = 'a'; c <= 'z'; c++){
                int l = 0, r = n - 1, cnt = 0;
                while(l <= r){
                    if(s[l] == s[r]) l++, r--;
                    else if(s[l] == c) cnt++, l++;
                    else if(s[r] == c) cnt++, r--;
                    else{
                        cnt = 1e9; break;
                    } 
                }
                ans = min(ans, cnt);
            }

        if(ans == 1e9) ans = -1;
        cout << ans << endl;
    }
    
    return 0;
}