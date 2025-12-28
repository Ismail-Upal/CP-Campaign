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
        string s; cin >> s;
        int ans = 0, n = sz(s);
        if(s[0] == 'u') s[0] = 's', ans++;
        if(s[n - 1] == 'u') s[n - 1] = 's', ans++;

        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'u') cnt++;
            else{
                ans += cnt / 2;
                cnt = 0;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}