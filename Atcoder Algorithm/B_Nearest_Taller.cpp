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
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        int mx = -1;
        for(int j = 1; j < i; j++){
            if(v[j] > v[i]) mx = j;
        }
        cout << mx << endl;
    }
    
    return 0;
}