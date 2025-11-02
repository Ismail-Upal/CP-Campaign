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
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    vector<int> a(n + 1), b(n + 3);
    for(int i = 1; i <= n; i++) a[i] = a[i - 1] + v[i];
    for(int i = n; i >= 1; i--) b[i] = b[i + 1] + v[i];

    int l, r;
    for(int i = 1; i <= n; i++){
        if(a[i] == b[i]){
            l = i, r = n - i;
            break;
        }
        if(a[i] > b[i]){
            l = i - 1; r = n - i + 1;
            break;
        }
    }

    cout << l << " " << r ;
    
    return 0;
}