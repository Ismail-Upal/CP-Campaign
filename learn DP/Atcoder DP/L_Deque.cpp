// // recursive
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 3e3 + 3;
// ll n, dp[N][N], a[N];

// ll rec(int l, int r){
//     if(l > r) return 0;
//     if(l == r) return a[l]; 
//     if(dp[l][r] != -1) return dp[l][r];

//     ll ans = a[l] - rec(l + 1, r);
//     ans = max(ans, a[r] - rec(l, r - 1));

//     return dp[l][r] = ans;
// }   

// int main()
// {   
//     cin >> n;
//     for(int i = 0; i < n; i++) cin >> a[i];
    
//     memset(dp, -1, sizeof dp);
//     cout << rec(0, n - 1);

//     return 0;
// }

// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll dp[n + 2][n + 2]; memset(dp, 0, sizeof dp);

    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            ll ans = 0;
            if(i > j) ans = 0;
            else if(i == j) ans = v[i];
            else{
                ans = v[i] - dp[i + 1][j];
                ans = max(ans, v[j] - dp[i][j - 1]);
            }
            dp[i][j] = ans;
        }
    }

    cout << dp[0][n - 1] ;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nm (1 + 2)
    // = O (nm)