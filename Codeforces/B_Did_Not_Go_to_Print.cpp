#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    
    vector<int> v, mp(n + 1, 0);
    int done = 0;

    for(int i = 1; i <= n; i++){
        if(s[i - 1] == '1'){
            v.push_back(i);
        }
        else if(s[i - 1] == '2'){
            if(sz(v)){
                mp[v.back()] = 1;
                done++;
                v.pop_back();
            }
            else mp[i] = 1, done++;
        }
        else{
            mp[i] = 1;
            done++;
        }
    }
    
    
    cout << n - done << endl;
    for(int i = 1; i <= n; i++){
        if(!mp[i]) cout << i << " ";
    }
    cout << endl;
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