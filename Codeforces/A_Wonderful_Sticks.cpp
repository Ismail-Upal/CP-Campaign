#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        string s; cin >> s;
        int big = n, sml = 1, sum = n * (n + 1) / 2;
        for(int i = n - 2; i >= 0; i--){
            if(s[i] == '<'){    
                v[i + 1] = sml;
                sum -= sml;
                sml++;
            }
            else{
                v[i + 1] = big;
                sum -= big;
                big--;
            }
        }
        v[0] = sum;
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}