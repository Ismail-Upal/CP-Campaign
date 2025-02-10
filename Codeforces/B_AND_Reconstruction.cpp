#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> b(n - 1), a(n);
        for(int i = 0; i < n - 1; i++) cin >> b[i];
        for(int i = 0; i < n - 1; i++){
            a[i] |= b[i];
            a[i + 1] |= b[i];
        }
        int ok = 0;
        for(int i = 0; i < n - 1; i++){
            if((a[i] & a[i + 1]) != b[i]){
                cout << -1 << endl;
                ok = 1;
                break;
            }
        }
        if(ok) continue;
        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    
    return 0;
}