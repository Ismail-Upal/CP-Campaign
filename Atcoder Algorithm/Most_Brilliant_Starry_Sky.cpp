#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        v[i] = {a, b};
    }

    int ans = 0;
    for(double deg = 0; deg <= 360; deg++){
        double rad = deg * M_PI / 180.0;
        double ct = cos(rad), st = sin(rad);

        int l = 0, r = 0, m = 0;
    
        for(auto [x, y] : v){
            double cross = ct * y - st * x;
            double eps = 1e-9 * (fabs(ct * y) + fabs(st * x) + 1.0);

            if(cross > eps) l++;
            else if(cross < -eps) r++;
            else m++;
        }

        if(m == 0) ans = max({ans, l, r});
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