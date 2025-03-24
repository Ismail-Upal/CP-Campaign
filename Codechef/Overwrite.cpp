#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m ;
        vector<int> v(n), b(m);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        int mn = *min_element(b.begin(), b.end());
        while(b[0] != mn){
            b.push_back(b[0]);
            b.erase(b.begin());
        }
        
        for(int i = 0; i <= n - m; i++){
            int ok = 1;
            for(int j = i, k = 0; j < i + m; j++, k++){
                if(b[k] > v[j]){
                    ok = 0; break;
                }
                else if(b[k] == v[j]) continue;
                else{
                    ok = 1; break;
                }
            }
            if(ok){
                for(int j = i, k = 0; j < i + m; j++, k++){
                    v[j] = b[k];
                }
            }
        }
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}