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
        int one = 0, two = 0, three = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == 1) one++;
            if(x == 2) two++;
            if(x == 3) three++;
        }
        int ans = 0;
        if(two > 1) ans += two - 1;
        if(one and three){
            ans += min(one, three);
        }

        cout << ans << endl;
    }
    
    return 0;
}