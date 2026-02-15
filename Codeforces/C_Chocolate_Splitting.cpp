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
        int n; cin >> n;
        string s; cin >> s;
        int one = 0, zro = 0;
        for(auto i : s){
            if(i == '1') one++;
            else zro++;
        }

        int ans = 0;
        
        for(int i = 0; i < n; i++){
            int x = 0, y = 0;

            for(int j = i; j < n; j++){
                if(s[j] == '1') x++;
                else y++;
                ans = max(ans, one - x + y);
                ans = max(ans, zro - y + x);
                // cout << i << " " << j << " " << x << " " << y << " " << ans << endl;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}