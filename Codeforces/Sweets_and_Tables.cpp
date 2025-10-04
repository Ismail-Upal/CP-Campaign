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
    
    int t, m; cin >> t >> m;
    int i = 1;
    while(i <= t){
        if(m - i >= 0){
            m -= i; i++;
        }
        else break;
    }
    cout << t - i + 1;
    
    return 0;
}