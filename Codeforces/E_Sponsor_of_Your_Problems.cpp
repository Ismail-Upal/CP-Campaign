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
        int l, r; cin >> l >> r;
        string s = to_string(l);
        string t = to_string(r);

        int n = sz(s);
        int cnt = 0;
        int ok = 0;
        
        for(int i = 0; i < n; i++){
            if(ok){
                if(s[i] == '9' and t[i] == '0') cnt++;
                else break;
            }
            else{
                if(s[i] == t[i]) cnt += 2;
                else{
                    if(t[i] - s[i] == 1) cnt++, ok = 1;
                    else break;
                }
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}