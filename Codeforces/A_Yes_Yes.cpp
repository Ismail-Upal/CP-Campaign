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
        int ok = 1;
        string t = "Yes";
        if(sz(s) == 1){
            if(s[0] != 'Y' and s[0] != 'e' and s[0] != 's'){
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;

            continue;
        }
        for(int i = 0; i < sz(s) - 1; i++){
            if(s[i] == 'Y'){
                if(s[i + 1] != 'e'){
                    ok = 0; break;
                }
            }
            else if(s[i] == 'e'){
                if(s[i + 1] != 's'){
                    ok = 0; break;
                }
            }
            else if(s[i] == 's'){
                if(s[i + 1] != 'Y'){
                    ok = 0; break;
                }
            }
            else{
                ok = 0; break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}