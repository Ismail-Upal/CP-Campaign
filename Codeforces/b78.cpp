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
        int ans = 0;
        for(int i = 1; i <= 10; i++){
            for(int j = 1; j <= 10; j++){
                char c; cin >> c;
                if(c == '.') continue;
                if(i == 1 or i == 10 or j == 1 or j == 10) ans++;
                else if(i == 2 or i == 9 or j == 2 or j == 9) ans += 2;
                else if(i == 3 or i == 8 or j == 3 or j == 8) ans += 3;
                else if(i == 4 or i == 7 or j == 4 or j == 7) ans += 4;
                else ans += 5;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}