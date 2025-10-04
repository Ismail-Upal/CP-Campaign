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
        int n, q; cin >> n >> q;
        string s; cin >> s;
        while(q--){
            int l, r; cin >> l >> r; l--, r--;
            string t = "";
            for(int i = l; i <= r; i++){
                t += s[i];
            }

            int m = t.size();
            int i = 0, j = 0;
            int ok = 0;
            while(i < n and j < m){
                if(s[i] == t[j]){
                    // cout << i << " " << j << endl;
                    int cnt = 0;
                    while(i < n and j < m and s[i] == t[j]){
                        i++; j++;
                        cnt++;
                        if(cnt == m - 1){
                            i ++;
                            // cout << i << " " << j << endl;
                            break;
                        }
                    }
                }
                else i++;
            }

            if(j >= m) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}