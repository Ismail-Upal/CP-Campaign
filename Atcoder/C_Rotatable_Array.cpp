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
    
    int n, q; cin >> n >> q;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) v[i] = i;
    int mov = 0;

    while(q--){
        int op; cin >> op;
        if(op == 1){
            int p, x; cin >> p >> x;
            int tmp = n - mov + 1;
            if(p >= tmp){
                int idx = p - tmp + 1;
                v[idx] = x;
            }
            else{
                int idx = mov + p;
                v[idx] = x;
            }
        }
        else if(op == 2){
            int p; cin >> p;
            int tmp = n - mov + 1;
            if(p >= tmp){
                int idx = p - tmp + 1;
                cout << v[idx] << endl;
            }
            else{
                int idx = mov + p;
                cout << v[idx] << endl;
            }
        }
        else{
            int k; cin >> k; mov += k;
            mov = mov % n;
        }
    }

    
    return 0;
}