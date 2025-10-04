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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '0' and s[i + 1] == '1'){
                k--;
                s[i] = '1';
            }
            if(!k) break;
        }
        cout << count(s.begin(), s.end(), '1') << endl;
    }
    
    return 0;
}