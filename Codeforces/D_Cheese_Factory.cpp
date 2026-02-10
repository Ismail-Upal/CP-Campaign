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
        vector<int> a(3), b(3);
        for(int i = 0; i < 3; i++) cin >> a[i];
        for(int i = 0; i < 3; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2] << endl;
    }
    
    return 0;
}