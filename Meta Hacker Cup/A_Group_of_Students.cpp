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
    
    int n; cin >> n;
    int sum = 0;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        sum += v[i];
    }
    
    int x, y; cin >> x >> y;
    int a = 0, b = 0, ans = 0;
    for(int i = 1; i <= n; i++){
        a += v[i - 1];
        b = sum - a;
        if(a >= x and a <= y and b >= x and b <= y){
            ans = i; break;
        }
    }
    cout << ans ;
    
    return 0;
}