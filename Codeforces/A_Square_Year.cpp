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
        string s; cin >> s;
        int n = stoi(s);
        int p = sqrt(n);
        if(p * p != n){
            cout << - 1<< endl;
            continue;
        }
        int ok = 0;
        for(int i = 0; i <= p; i++){
            for(int j = i; j <= p; j++){
                if((i + j) * (i + j) == n){
                    cout << i << " " << j << endl;
                    ok = 1;
                    break;
                }
            }
            if(ok) break;
        }
    }
    
    return 0;
}