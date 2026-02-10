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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') ans += v[i];
        }

        int z = -1, add = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') ans += add, add = 0, z = i;
            else if(z != -1){
                add = max(add, v[z] - v[i]);
            }
        }
        cout << ans + add << endl;
    }
    
    return 0;
}