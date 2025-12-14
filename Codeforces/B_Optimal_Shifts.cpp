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
        int n; cin >> n;
        string s; cin >> s;
        s += s;
        int mx = 0, pre = -1;
        for(int i = 0; i < 2 * n; i++){
            if(s[i] == '1') pre = i;
            else if(pre != -1) mx = max(mx, i - pre);
        }

        cout << mx << endl;
    }
    
    return 0;
}