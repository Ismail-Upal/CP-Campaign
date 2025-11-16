#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 3088;
int n;
double v[N], dp[N][N];

double rec(int i, int head){
    if(i == n){
        if(head > (n / 2)) return 1.0;
        else return 0.0;
    }

    if(dp[i][head] != -1.0) return dp[i][head];

    double ans = rec(i + 1, head + 1) * v[i];
    ans += rec(i + 1, head) * (1 - v[i]);

    return dp[i][head] = ans;
}

int main()
{   
    opt();
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++) dp[i][j] = -1.0;
    }
    cout << fixed << setprecision(9) << rec(0, 0);
    
    return 0;
}