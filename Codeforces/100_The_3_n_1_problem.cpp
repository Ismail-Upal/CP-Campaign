#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("");
    
    int a1, b1; 
    while(cin >> a1 >> b1){
        int ans = 0;
        int a = a1, b = b1;
        if(a > b) swap(a, b);
        for(int i = a; i <= b; i++){
            int cnt = 1;
            int n = i;
            while(n != 1){
                if(n % 2) n = 3 * n + 1;
                else n = n / 2;
                cnt ++;
            }
            ans = max(ans, cnt);
        }
        cout << a1 << " " << b1 << " " << ans << endl;
    }
    
    return 0;
}