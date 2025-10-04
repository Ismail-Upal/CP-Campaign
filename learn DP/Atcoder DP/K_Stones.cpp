// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 102, M = 1e5 + 3;
// int n, k, a[N];
// int dp[M];

// int rec(int stn){
//     if(dp[stn] != -1) return dp[stn];

//     int ans = 0;
//     for(int j = 0; j < n; j++){
//         if(stn >= a[j]){
//             if(rec(stn - a[j]) == 0) ans = 1;
//         }
//         else break;
//     }

//     return dp[stn] = ans;
// }

// int main()
// {   
//     cin >> n >> k;
//     for(int i = 0; i < n; i++) cin >> a[i];
//     memset(dp, -1 , sizeof dp);
//     sort(a, a + n);

//     if(rec(k) == 1) cout << "First";
//     else cout << "Second" ;

//     return 0;
// }

// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int dp[k + 1] = {0} ;

    for(int i = 0; i <= k; i++){
        int ans = 0;
        for(int j = 0; j < n; j++){
            if(i >= a[j]){
                if(dp[i - a[j]] == 0) ans = 1;
            }
            else break;
        }
        dp[i] = ans;
    }

    if(dp[k]) cout << "First";
    else cout << "Second";

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nm (1 + 2)
    // = O (nm)