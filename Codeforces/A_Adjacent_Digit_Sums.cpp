#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int sum(string s){
    int sm = 0;
    for(int i = 0; i < sz(s); i++){
        sm += s[i] - '0';
    }
    return sm;
}
int32_t main()
{   
    opt();
    
    tc{
        int x, y; cin >> x >> y;
        int ok = 0;
        for(int i = 1; i <= 1000; i++){
            string s = to_string(i);
            int sum1 = sum(s);
            if(sum1 != x) continue;
            for(int j = 1; j <= 1000; j++){
                string t = to_string(j);
                int sum2 = sum(t);
                if(i == j + 1 and sum2 == y) ok = 1, cout << i << " " << j << endl;
            }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}