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
    
    int r, c, n, k; cin >> r >> c >> n >> k;
    int lu = 0, ld = 0, up = 0, down = 0, right = 0;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if(y == 1) left++, up++, down++;
        else if(y == c) up++, down++, right++;
        else if(x == 1) left++, up++, right++;
        else if(x == r) left++, down++, right++;
    }
    cout << left << " " << right << " " << up << " " << down ;
    cout << max({left, right, up, down}) + 1 << endl;
    
    return 0;
}