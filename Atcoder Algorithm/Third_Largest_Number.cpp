#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    deque<int> v(n), mx(3, 0);

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(mx[0] == 0) mx[0] = v[i];
        else if(mx[1] == 0) mx[1] = v[i];
        else if(mx[2] == 0){
            mx[2] = v[i];
            sort(mx.begin(), mx.end());
            cout << mx[0] << endl;
        }
        else{
            if(v[i] > mx[0]){
                mx.pop_front();
                mx.push_back(v[i]);
            }
            sort(mx.begin(), mx.end());
            cout << mx[0] << endl;
        }
    }
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