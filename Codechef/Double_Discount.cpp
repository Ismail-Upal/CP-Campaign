#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int c1 = a[i], c2 = a[j];
            if(c1 > c2) c1 = c1 - min(100, c1 / 2);
            else c2 = c2 - min(100, c2 / 2);

            if(c1 + c2 <= k){
                ans = max(ans, b[i] + b[j]);
            }
        }
    }
    
    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}