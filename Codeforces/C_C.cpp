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
        vector<int> v(n);
        int zro = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] == 0) zro++;
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if(sum < 100){
            cout << "NO" << endl;
            continue;
        }
        int nd = sum - 100;

        if(nd >= n - zro) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}