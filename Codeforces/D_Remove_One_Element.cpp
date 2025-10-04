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
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> b(n, 1);
    for(int i = 1; i < n; i++){
        if(v[i] > v[i - 1]){
            b[i] += b[i - 1];
        }
    }
    
    for(int i = n - 2; i >= 0; i--){
        if(v[i] < v[i + 1]){
            b[i] = b[i + 1];
        }
    } 
    // for(auto i : b) cout << i << " ";
    int ans = *max_element(b.begin(), b.end());
    for(int i = 1; i < n - 1; i++){
        if(v[i] >= v[i + 1]){
            if(v[i + 1] > v[i - 1]){
                ans = max(ans, b[i + 1] + b[i - 1] - 1);
            }
            if(i + 2 < n and v[i + 2] > v[i]){
                ans = max(ans, b[i + 2] + b[i] - 1);
            }
        }
    }

    cout << ans;
    
    return 0;
}