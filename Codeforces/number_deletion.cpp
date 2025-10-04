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
        cout << 2 << endl;

        vector<int> v;
        for(int i = 1; i <= n; i++) v.push_back(i);

        if(n == 2){
           
            cout << 1 << " " << 2 << endl;
            continue;
        }

        int idx = n - 1, ins = 0;

        ins = (v[idx] + v[idx - 2] + 1) / 2;
        cout << v[idx] << " " << v[idx - 2] << endl;
        v[idx - 2] = ins;
        v.pop_back();n--;

        while(n > 2){
            // for(int i : v) cout << i << " " ;
            // cout << endl;
            idx = n - 1;
            if(v[idx] == v[idx - 1]){
                ins = v[idx];
                cout << ins << " " << ins << endl;
                v.pop_back();
            }
            else{
                ins = (v[idx] + v[idx - 1] + 1) / 2;
                cout << v[idx] << " " << v[idx - 1] << endl;
                v[idx - 1] = ins;
                v.pop_back();
            }
            n--;
        }
        cout << v[0] << " " << v[1] << endl;
    }
    
    return 0;
}