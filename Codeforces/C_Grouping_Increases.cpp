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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int x = 1e9, y = 1e9, ans = 0;
        for(int i = 0; i < n; i++){
            if(x > y) swap(x, y);
            
            if(v[i] > y) ans++, x = v[i];
            else if(x < v[i] and v[i] < y) y = v[i];
            else if(v[i] <= x) x = v[i];
        }

        cout << ans << endl;
    }
    
    return 0;
}