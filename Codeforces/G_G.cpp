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
        int k, n, m; cin >> k >> n >> m;
        vector<int> v(n), b(m);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        vector<int> ans;
        for(int i = 0, j = 0; i < n or j < m; ){
            if(i < n and v[i] == 0) ans.push_back(0), i++, k++;
            else if(j < m and b[j] == 0) ans.push_back(0), j++, k++;

            else if(i < n and v[i] <= b[j] and v[i] <= k) ans.push_back(v[i]), i++;
            else if(j < m and v[i] >= b[j] and b[j] <= k) ans.push_back(b[j]), j++;
            else if(i == n and j < m and b[j] <= k) ans.push_back(b[j]), j++;
            else if(j == m and i < n and v[i] <= k) ans.push_back(v[i]), i++; 
            else break;
        }


        if(sz(ans) != n + m) cout << -1 ;
        else{
            for(int i : ans) cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}