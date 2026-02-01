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
        int n = 10;
        string s[n];
        int ans  = 0;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            for(int j = 0; j < n; j++){
                if(s[i][j] == 'X'){
                    if(i >= 4 and i <= 5 and j >= 4 and j <= 5) ans += 5;
                    else if((i >= 3 and i <= 6) and (j >= 3 and j <= 6)) ans += 4;
                    else if((i >= 2 and i <= 7) and (j >= 2 and j <= 7)) ans += 3;
                    else if((i >= 1 and i <= 8) and (j >= 1 and j <= 8)) ans += 2;
                    else if((i >= 0 and i <= 9) and (j >= 0 and j <= 9)) ans += 1;
                }
            }
        }   
        cout << ans << endl;
    }

    
    return 0;
}