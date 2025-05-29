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
        int n; char c; cin >> n >> c;
        string s; cin >> s;
        int evn = 0, odd = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != c){
                if((i + 1) % 2) odd++;
                else evn++;
            }
        }
        
        if(odd and evn){
            int idx = n / 2;
            idx++;
            int ok = 0, ans = 0;
            for(int i = idx - 1; i < n; i++){
                if(s[i] == c){
                    ok = 1; ans = i + 1;
                    break;
                }
            }
            if(ok){
                cout << 1 << endl << ans << endl;
            }
            else{
                cout << 2 << endl << n - 1 << " " << n << endl;
            }
        }
        else if(evn){
            cout << 1 << endl;
            if(n % 2) cout << n << endl;
            else cout << n - 1 << endl;
        }
        else if(odd){
            cout << 1 << endl << 2 << endl;
        }
        else cout << 0 << endl;
    }
    
    return 0;
}