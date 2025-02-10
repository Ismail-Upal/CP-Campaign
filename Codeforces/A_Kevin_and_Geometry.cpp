#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ok = 0, c = -1;
        for(int i = 0; i < n - 1; i++){
            if(v[i] == v[i + 1]){
                c = v[i];
                v.erase(find(v.begin(), v.end(), v[i]));
                v.erase(find(v.begin(), v.end(), v[i]));
                break;
            }
        }
        int a = -1, b = -1;
        for(int i = 0; i < n - 3; i++){
            if(abs(v[i] - v[i + 1]) < 2 * c){
                a = v[i]; b = v[i + 1];
                ok = 1;
                break;
            }
        }
        if(ok){
            cout << a << " " << b << " " << c << ' ' << c << endl;
        }
        else cout << -1 << endl;
    }
    
    return 0;
}