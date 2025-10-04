#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n; 
const int N = 1e5 + 23;
bool num[N];
int dp[N];
map<int, int> mp;
int f(int i, int sum, vector<int>&v){
    if(i == n){
        return dp[i] = sum;
    }
    if(dp[i] != -1) return dp[i];
    int ans = f(i + 1, sum, v);

    if(num[v[i]]){
        num[v[i]] = 0;
        bool pre1 = num[v[i] + 1];
        bool pre2 = num[v[i] - 1];
        num[v[i] + 1] = 0;
        num[v[i] - 1] = 0;

        ans = max(ans, f(i + 1, sum + (mp[v[i]] * v[i]), v));

        num[v[i]] = 1;
        num[v[i] + 1] = pre1;
        num[v[i] - 1] = pre2;
    }
    
    return dp[i] = ans;
}
int32_t main()
{   
    opt();
    
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    memset(num, true, sizeof num);
    memset(dp, -1, sizeof dp);
    cout << f(0, 0, v);

    return 0;
}