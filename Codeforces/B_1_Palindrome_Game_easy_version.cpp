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
        string s; cin >> s;
        
        int zro = count(s.begin(), s.end(), '0');

        int d = 0, le = 0, ri = n - 1;

        while(le < ri){
            if(s[le] != s[ri]) d++;
            le++, ri--;
        }

        if(zro == 0) cout << "DRAW" << endl;
        else if(zro == 1 and n == 1) cout << "BOB" << endl;
        else if(zro == n and n % 2) cout << "ALICE" << endl;
        else if(zro == n and n % 2 == 0) cout << "BOB" << endl;
        else if(d == 0 and (zro == 1 or zro % 2 == 0)) cout << "BOB" << endl;
        else if(d == 0 and zro % 2) cout << "ALICE" << endl;
        else if(d > 0) cout << "ALICE" << endl;
    }
    
    return 0;
}
