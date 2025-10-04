#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6;
double dp[N];
double fact(double n, double b){

    if(n <= 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = n * fact(n - 1, b);
}
int32_t main()
{   
    opt();
    
    tc{
        memset(dp, -1, sizeof dp);
        int n, b; cin >> n >> b;
        double m = fact(n, b);
        string s = to_string(m);
        ll dig = s.size();
        cout << "Case " << _ << ": " << m << endl;
    }
    
    return 0;
}