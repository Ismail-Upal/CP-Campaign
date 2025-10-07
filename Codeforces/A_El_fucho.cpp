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
        int lose = n / 2, win = n - lose, ans = lose;
        while(1){
            int p = win / 2;
            ans += p;
            win -= p;

            int q = lose / 2;
            ans += q;
            lose -= q;
            lose += p;

            if(win == 1 and lose == 1) break;
        }

        cout << ans + 1 << endl;
    }
    
    return 0;
}