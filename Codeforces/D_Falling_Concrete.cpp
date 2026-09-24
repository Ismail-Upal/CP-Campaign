#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve() {
    int n; cin >> n;
    set<int> se;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        se.insert(abs(x - i));
    }

    int ans = 1, len = 1, pre = -1;
    for(auto i : se){
        if(pre == -1){
            pre = i;
            continue;
        }

        if(pre + 1 == i){
            len++;
        }
        else{
            len = 1;
        }
        pre = i;
        ans = max(ans, len);
    }

    cout << ans << endl;
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