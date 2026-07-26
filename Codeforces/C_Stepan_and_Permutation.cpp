#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    if(x > y) swap(x, y);

    if(y % x){
        cout << "YES" << endl; 
        return ;
    }
    
    for(int i = 0; i < x; i++){
        vector<int> tmp;
        for(int j = i; j < n; j += x){
            tmp.push_back(v[j]);
        }

        sort(tmp.begin(), tmp.end());

        for(int j = i, k = 0; j < n and k < sz(tmp); j += x, k++) v[j] = tmp[k]; 
    }
 
    if(is_sorted(v.begin(), v.end())) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}

