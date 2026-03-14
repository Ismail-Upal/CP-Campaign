#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int h, m, s, t1, t2; 
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5; t1 *= 5, t2 *= 5;
    h %= 60, t1 %= 60, t2 %= 60;

    vector<int> v = {h, m, s};
    sort(v.begin(), v.end());
    if(t1 > t2) swap(t1, t2);

    int ok = 0;
    if(v[0] <= t1 and t2 <= v[1]) ok = 1;
    if(v[1] <= t1 and t2 <= v[2]) ok = 1;
 
    if(t2 <= v[0]) ok = 1;
    if(v[2] <= t1) ok = 1;
    if(v[2] <= t2 and t1 <= v[0]) ok = 1;

    if(ok) cout << "YES" ;
    else cout << "NO";
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}