#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    int mnin = 1e9;
    for(int i = x + 1; i <= y; i++){
        mnin = min(mnin, v[i]);
    }

    int i = x + 1;
    while(v[i] != mnin) i++;
    vector<int> tmp;
    while(i <= y) tmp.push_back(v[i++]);
    i = x + 1;
    while(v[i] != mnin) tmp.push_back(v[i++]);

    i = x + 1;
    for(auto j : tmp){
        v[i++] = j;
    }


    vector<int> first;
    i = 1; 
    while(i <= x and v[i] < v[x + 1]) first.push_back(v[i++]);
    deque<int> last;
    while(i <= x) last.push_back(v[i++]);

    for(int j = y + 1; j <= n; j++) last.push_back(v[j]);

    while(last.size() and last.front() < v[x + 1]){
        first.push_back(last.front());
        last.pop_front();
    }
    
    for(auto j : first) cout << j << " ";
    for(int j = x + 1; j <= y; j++) cout << v[j] << " ";
    for(auto j : last) cout << j << " ";
    
    cout << endl;
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