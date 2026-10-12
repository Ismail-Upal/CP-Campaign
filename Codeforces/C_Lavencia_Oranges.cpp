#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 2e5 + 1;
int ans[N];

vector<pair<int, int>> v;
void pref(){
    v.push_back({1, 1});
    int i = 2, cnt = 1;
    while(i < N){
        cnt++, i++;
        v.push_back({i, cnt});
        v.push_back({i + cnt, cnt});
        i += cnt;
    }
}

void Solve(){
    int n; cin >> n;

    int lo = lower_bound(v.begin(), v.end(), n) - v.begin();
    if(v[lo] == )
}

int main()
{   
    fast; prep();
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}