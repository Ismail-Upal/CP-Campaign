#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 4;
int dp[N];
int rec(int i, vector<int> &v, int n){
    if(i > n) return 0;

    if(dp[i] != -1) return dp[i];

    int op1 = 1e9, op2 = 1e9, op3 = 1e9, op4 = 1e9;
    int add = 0;

    if(v[i] == 1) add++;
    op1 = rec(i + 2, v, n) + add;
    op2 = rec(i + 3, v, n) + add;


    if(i + 1 <= n and v[i + 1] == 1) add++;
    op3 = rec(i + 3, v, n) + add;
    op4 = rec(i + 4, v, n) + add;

    return dp[i] = min({op1, op2, op3, op4});
}

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        memset(dp, -1, sizeof dp);

        cout << rec(1, v, n);

        cout << endl;
    }
    
    return 0;
}