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
        int n, l, r; cin >> n >> l >> r;
        int m = n;
        vector<int> v(n + 1);
        int ok = 1;
        while(n > 0){
            int num = r / n;
            num *= n;
            if(num >= l and num <= r){
                v[n] = num;
                n--;
            }
            else{
                ok = 0; break;
            }
        }
        if(!ok){
            cout << "NO" << endl; continue;
        }
        cout << "YES" << endl;
        for(int i = 1; i <= m; i++) cout << v[i] << ' ';
        cout << endl;
    }
    
    return 0;
}