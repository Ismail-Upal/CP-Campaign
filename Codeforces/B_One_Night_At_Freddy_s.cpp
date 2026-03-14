#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m, l; cin >> n >> m >> l;
    vector<int> a(l + 1, 0);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[x] = 1;
    }
    vector<int> d(m, 0);
    
    for(int i = 1; i <= l; i++){
        sort(d.rbegin(), d.rend());
        int del = min(n + 1, m);
        d[del - 1]++;
        if(a[i]){
            sort(d.rbegin(), d.rend());
            d[0] = 0;   
            n--;
        }
    }   

    cout << *max_element(d.begin(), d.end()) << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}