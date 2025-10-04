// // recursive
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 3, mod = 1e9 + 7;
int n, k, dp[102][N], a[N], sum;

int rec(int i, int s){
    if(i > n){
        if(k == s) return 1;
        else return 0;
    }
    if(k == s) return 1;

    int ans = 0;
    for(int j = 0; j <= a[i]; j++){
        if(s + j <= k){
            ans += rec(i + 1, s + j);
        }
    }

    return ans;
}   

int main()
{   
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i], sum += a[i];;
    sort(a, a + n + 1);

    memset(dp, -1, sizeof dp);
    cout << rec(1, 0);

    return 0;
}

// iterative----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {   
//     int n; cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];
//     ll dp[n + 2][n + 2]; memset(dp, 0, sizeof dp);

//     for(int i = n - 1; i >= 0; i--){
//         for(int j = 0; j < n; j++){
//             ll ans = 0;
//             if(i > j) ans = 0;
//             else if(i == j) ans = v[i];
//             else{
//                 ans = v[i] - dp[i + 1][j];
//                 ans = max(ans, v[j] - dp[i][j - 1]);
//             }
//             dp[i][j] = ans;
//         }
//     }

//     cout << dp[0][n - 1] ;

//     return 0;
// }

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nm (1 + 2)
    // = O (nm)