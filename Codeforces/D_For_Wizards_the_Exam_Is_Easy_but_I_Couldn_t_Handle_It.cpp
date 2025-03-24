#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("");
    
    tc{
        int n; cin >> n;
        vector<int> v(n), tmp(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = n - 1; i >= 0; i--){
            int mn = 0;
            for(int j = n - 1; j >= i; j--){
                if(v[j] < v[i]) mn++;
            }
            tmp[i] = mn;
        }
        int mx = *max_element(tmp.begin(), tmp.end());
        int mn = *min_element(tmp.begin(), tmp.end());
        int l = 1, r = n - 1;
        for(int i = 0; i < n; i++){
            if(tmp[i] == mx){
                l = i + 1;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(v[i] <= v[l]){
                r = i + 1;
                break;
            }
        }
        if(mx == mn) l = 1, r = 1;
        cout << l << " " << r << endl;
    }
    
    return 0;
}