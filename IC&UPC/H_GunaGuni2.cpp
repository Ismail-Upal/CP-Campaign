#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll mod = 998244353;
ll n, m, k;

ll rec(int i, int j, int c){
    if(i > n or j > m) return 0;
    if(c == k) return 0;
    
    int ans = 0;

    ans = rec(i + 1, j, c) + rec(i + 2, j, c + 1) + 2;
    ans += rec(i, j + 1, c) + rec(i, j + 2, c + 1) + 2;

    return ans;
}

int main()
{   
    opt();
    
    tc{
        cin >> n >> m >> k;

        cout << rec(0, 0, 0);
    }
    
    return 0;
}