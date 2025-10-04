#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n; 
pair<double, double> p[101];
double sq(double x){
    return x * x;
}
double cost(int x, int y){
    double dist = sqrt(sq(p[x].first - p[y].first) + sq(p[x].second - p[y].second));
    return sin(dist);
}
int main()
{   
    opt();
    
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> p[i].first >> p[i].second;

    double dp[n + 1][n + 1];
    for(int len = 3; len <= n; len++){
        for(int l = 1; l + len - 1 <= n; l++){
            int r = l + len - 1;
            if(len == 3) return 0;
            double ans = 0;
            for(int x = l + 1; x <= r - 1; x++){
                if(x == l + 1){
                    ans = max(ans, cost(l + 1, r) + dp[l + 1][r]);
                }
                else if(x == r - 1){
                    ans = max(ans, cost(l, r - 1) + dp[l][r - 1]);
                }
                else{
                    ans = max(ans, cost(l, x) + cost(r, x) + dp[l][x] + dp[x][r]);
                }
            }
            dp[l][r] = ans;
        }
    }
    
    return 0;
}