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
        int x, y; cin >> x >> y;
        int evn = 0, odd = 0;
        for(int i = x; i <= y; i++){
            if(i % x == 0){
                if(i % 2) odd += i;
                else evn += i;
            }
        }
        if(evn >= odd) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}