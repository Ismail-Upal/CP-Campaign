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
        int ans = 0, ok = 0;
        for(auto i : s){
            if(i == '1' and ok) ans++;
            else ok = 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}