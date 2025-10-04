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
    
    ll a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    ll white = 0, black = 0;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            char ch; cin >> ch;
            if(ch == 'Q') white += e;
            if(ch == 'R') white += d;
            if(ch == 'N') white += c;
            if(ch == 'B') white += b;
            if(ch == 'P') black += e;

            if(ch == 'q') black += e;
            if(ch == 'r') black += d;
            if(ch == 'n') black += c;
            if(ch == 'b') black += b;
            if(ch == 'p') white += e;
        }
    }
    cout << white << " " << black;                    
    
    return 0;
}