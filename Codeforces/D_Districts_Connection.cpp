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
        int n; cin >> n;
        vector<int> v(n + 1);
        int same, ok = 1;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            if(i > 1 and same != v[i]) ok = 0;
            same = v[i];
        }
        if(ok){
            cout << "NO" << endl; continue;
        }
        int dif;
        cout << "YES" << endl;
        for(int i = 2; i <= n; i++){
            if(v[i] != v[1]){
                cout << 1 << ' ' << i << endl;
                dif = i;
            }
        }
        for(int i = 2; i <= n; i++){
            if(v[i] == v[1]){
                cout << i << " " << dif << endl; 
            }
        }
    }
    
    return 0;
}