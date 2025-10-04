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
        int n, x, y; cin >> n >> x >> y;
        vector<int> v(x);
        for(int i = 0; i < x; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int ans = x - 2;
        for(int i = 1; i < x; i++){
            if(v[i] - v[i - 1] == 2) ans++;
        }
        if(n - v[x - 1] + v[0] == 2) ans++;

        cout << ans << endl;
    }
    
    return 0;
}