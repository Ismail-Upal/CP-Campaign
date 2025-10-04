#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, a[1001], q;
int dp[101][10001];
int rec(int level, int left){
    if(left < 0) return 0;
    if(level == n){
        if(left == 0) return 1;
        else return 0;
    }

    if(dp[level][left] != -1) return dp[level][ left];

    int ans = 0;
    if(rec(level + 1, left)) ans = 1;
    else if(rec(level + 1, left - a[level])) ans = 1;

    return dp[level][left] = ans;
}

void printset(int level, int left){
    if(level == n) return;

    if(rec(level + 1, left)) printset(level + 1, left);
    else if(rec(level + 1, left - a[level])){
        cout << a[level] << " ";
        printset(level + 1, left - a[level]);
    }
}

int32_t main()
{   
    opt();
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> q; 

    memset(dp, -1, sizeof dp);

    while(q--){
        int x; cin >> x;
        if(rec(0, x)){
            printset(0, x);
            cout << endl; 
        }
        else cout << "NO Solution" << endl;
    }
    
    return 0;
}