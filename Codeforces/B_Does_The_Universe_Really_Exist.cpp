#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>using pbds_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int one = count(s.begin(), s.end(), '1');
    int zro = count(s.begin(), s.end(), '0');

    for(int i = 0; i < n and s[i] == '1'; i++) one--;

    int ok = 1;
    if(n == 1){
        if(s[0] == '1') ok = 0;
    }
    else{
        if(one or !zro) ok = 0;
    }

    if(ok) cout << "YES" << endl;
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