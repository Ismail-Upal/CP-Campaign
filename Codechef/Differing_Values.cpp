#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int one = 0, zro = 0;
        for(auto i : s){
            if(i == '1') one++;
            else zro++;
        }

        int mx = 0, mn = 0;
        for(int i = 1; i <= k; i++){
            int cnt = 1;
            for(int j = i + k; j <= n; j += k) cnt++;
            mx += (cnt + 1) / 2, mn += cnt / 2;
        }
       
        if(mn <= one and one <= mx) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}