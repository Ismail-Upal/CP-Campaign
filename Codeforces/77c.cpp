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
        vector<string> s(10);
        char ans;

        for(int i = 0; i < 8; i++){
            cin >> s[i];
            int ok = 1;
            char prev = 'R';
            for(int j = 0; j < 8; j++){
                if(s[i][j] != prev) ok = 0;
            }
            if(ok) ans = prev;
        }

        for(int j = 0; j < 8; j++){
            int ok = 1;
            char prev = 'B';
            for(int i = 0; i < 8; i++){
                if(s[i][j] != prev) ok = 0;
            }
            if(ok) ans = prev;
        }

        cout << ans << endl;
    }
    
    return 0;
}