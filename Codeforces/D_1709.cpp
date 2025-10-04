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
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<int> x, y, z;

        for(int i = 0; i < n - 1; i++){
            int ok = 0;
            for(int j = 0; j < n - i - 1;j++){
                if(a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                    ok = 1;
                    x.push_back(j + 1);
                }
            }
            if(!ok) break;
        }

        for(int i = 0; i < n - 1; i++){
            int ok = 0;
            for(int j = 0; j < n - i - 1;j++){
                if(b[j] > b[j + 1]){
                    swap(b[j], b[j + 1]);
                    ok = 1;
                    y.push_back(j + 1);
                }
            }
            if(!ok) break;
        }

        for(int i = 0; i < n; i++){
            if(a[i] > b[i]) z.push_back(i + 1);
        }

        cout << sz(x) + sz(y) + sz(z) << endl;

        for(int i : x) cout << 1 << " " << i << endl;
        for(int i : y) cout << 2 << " " << i << endl;
        for(int i : z) cout << 3 << " " << i << endl;
    }
    
    return 0;
}