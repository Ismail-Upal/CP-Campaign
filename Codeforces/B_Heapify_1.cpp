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
        vector<int> v(n + 1), vis(n + 1, 0);
        for(int i = 1; i <= n; i++) cin >> v[i];

        
        for(int i = 1; i <= n; i++){
            if(vis[i]) continue;

            vector<int> a;
            for(int j = i; j <= n; j *= 2){
                vis[j] = 1;
                a.push_back(v[j]);
            }

            sort(a.begin(), a.end());
            for(int j = i, k = 0; j <= n; j *= 2){
                v[j] = a[k];
                k++;
            }
        
        }

        if(is_sorted(v.begin() + 1, v.end())) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}