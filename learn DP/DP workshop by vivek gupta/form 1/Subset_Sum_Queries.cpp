
#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
const int N = 1e5 + 2;
int dp[101][N];

int rec(int level, int left, vector<int> &a){
    if(left < 0) return 0;
    if(level == a.size()){
        if(left == 0) return 1;
        else return 0;
    }
    if(dp[level][left] != -1) return dp[level][left];

    int ans = 0;
    if(rec(level + 1, left, a)) ans = 1;
    else if(rec(level + 1, left - a[level], a)) ans = 1;

    return dp[level][left] = ans;
}


void print_set(int level, int left, vector<int> &a, vector<int> &ans){
    if(level == a.size()) return;
    
    if(rec(level + 1, left, a) == 1) print_set(level + 1, left, a, ans);
    else if(rec(level + 1, left - a[level], a)  == 1){
        ans.push_back(level);
        print_set(level + 1, left - a[level], a, ans);
    }

}


vector<vector<int>> subset_queries(vector<int> &arr, vector<int> &queries) {
    int n = arr.size();
    vector<vector<int>> ans;
    memset(dp, -1, sizeof dp);
    for(int x : queries){
        if(rec(0, x, arr)){
            vector<int> v;
            print_set(0, x, arr, v);
            ans.push_back(v);
        }
        else ans.push_back({-1});
    }
    return ans;
}


void solve() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)cin >> arr[i];
    vector<int> queries(Q);
    for (int i = 0; i < Q; i++)cin >> queries[i];
    auto ans = subset_queries(arr, queries);

    // checker.
    if (ans.size() != Q) {
        cout << 101 << endl;
        return;
    }
    for (int i = 0; i < Q; i++) {
        auto x = ans[i];
        if (x.size() == 0) {
            cout << 101 << endl;
            continue;
        }
        if (x.size() == 1 && x[0] == -1) {
            cout << -1 << endl;
            continue;
        }
        ll sum = 0, p = -10;
        for (auto y : x) {
            if (y < 0 || y >= N || p >= y ) { // valid 0-indexed.
                sum = -1111;
                break;
            }
            p = y;
            sum += arr[y];
        }
        if (sum == queries[i]) {
            cout << 1 << endl;
        }
        else cout << 101 << endl;
    }
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

#ifdef Mastermind_
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // int i = 1;
    // cin >> t;
    while (t--) {
        // cout << "Case #" << i << ": ";
        solve();
        // i++;
    }
    return 0;
}
