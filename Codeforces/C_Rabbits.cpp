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
        int ok = 1;
        for(int i = 3; i < n - 2; i++){
            int sm = s[i - 1] - '0' + s[i - 2] - '0';
            sm += s[i + 1] - '0' + s[i + 2] - '0';
            if(s[i] == '0' and sm == 4) ok = 0;
        }
        if(!ok){
            cout << "NO" << endl; continue;
        }

        
    }
    
    return 0;
}