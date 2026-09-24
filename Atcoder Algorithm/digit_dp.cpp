#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

int dp[100][182][2];
int rec(string &num, int n, int x, bool tight){
    if(x < 0) return 0;
    if(n == 1){
        if(x >= 0 and x <= 9) return 1;
        else return 0;
    } 
    
    int ans = 0;
    int ub = tight ? (num[sz(num) - n] - '0') : 9;
    
    for(int d = 0; d <= ub; d++){
        ans += rec(num, n - 1, x - d, (tight & (d == ub)));
    }

    return ans;
}

void Solve(){
    int l, r; cin >> l >> r;
    string L = to_string(l);
    string R = to_string(r);

    cout << rec(R, sz(R), 0, 1);
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}