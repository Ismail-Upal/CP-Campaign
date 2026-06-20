#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, d; cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = n - 1;
    while(i + 1 < j and v[i + 1] - v[0] <= d) i++;
    while(i < j - 1 and v[n - 1] - v[j - 1] <= d) j--;

    if(i + 1 == j) cout << "Yes";
    else cout << "No";
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}