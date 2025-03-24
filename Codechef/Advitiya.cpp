#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        string t = "ADVITIYA";
        int ans = 0;
        for(int i = 0; i < sz(s); i++){
            if(s[i] < t[i]){
                ans += abs(s[i] - t[i]);
            }
            else if(s[i] > t[i]){
                int x = 'Z' - s[i];
                int y = t[i] - 'A' + 1;
                // cout << x << " " << y;
                ans += x + y;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}