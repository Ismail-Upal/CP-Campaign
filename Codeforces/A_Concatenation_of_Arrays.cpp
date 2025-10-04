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
        vector<pair<int, pair<int, int>>> v(n);
        for(int i = 0; i < n; i ++){
            int a, b; cin >> a >> b;
            v[i] = {a + b, {a, b}};
        }

        sort(v.begin(), v.end());

        for(auto i : v) cout << i.second.first << ' ' << i.second.second << " " ;
        cout << endl;
    }
    
    return 0;
}