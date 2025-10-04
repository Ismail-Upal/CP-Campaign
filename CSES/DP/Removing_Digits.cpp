#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    
    int n; cin >> n;
    int dp[n + 1];
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int ans = 1e9;
        for(auto j : s){
            int d = j - '0';
            if(d != 0) ans = min(ans, dp[i - d] + 1);
        }
        dp[i] = ans;
    }

    cout << dp[n];
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {   
//     int n; cin >> n;
//     queue<pair<int, int>> q;
//     map<int, int> vis;
//     q.push({n, 0});
//     vis[n] = 1;
//     while(!q.empty()){
//         auto [dig, step] = q.front(); q.pop();
//         if(dig == 0){
//             cout << step << endl; return 0;
//         }

//         string s = to_string(dig);
//         for(auto i : s){
//             int num = i - '0';
//             if(num != 0 and !vis[dig - num]){
//                 q.push({dig - num, step + 1});
//                 vis[dig - num] = 1;
//             }
//         }
//     }
    
//     return 0;
// }