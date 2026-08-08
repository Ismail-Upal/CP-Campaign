#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v;

    int p1 = -1, p2 = -1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(p1 == -1){
            p1 = x;
            v.push_back(x);
        }
        else if(p2 == -1){
            p2 = x;
            v.push_back(x);
        }
        else{
            if(p1 == p2 and p2 == x){
                continue;
            }
            else{
                v.push_back(x);
                p1 = p2;
                p2 = x;
            }
        }
    }
   
    int ok = 0;
    n = sz(v);

    for(int i = 1; i < n - 2; i++){
        if(v[i] == v[i - 1] and v[i + 1] == v[i + 2]){
            swap(v[i], v[i + 1]);
            ok = 1;
            break;
        }
    }

    if(!ok){
        for(int i = 1; i < n; i++){
            if(v[i] == v[i - 1]){
                if(i + 2 < n){
                    if(v[i] != v[i + 2]){
                        swap(v[i], v[i + 1]);
                        break;
                    }
                }
                else if(i + 1 < n){
                    swap(v[i], v[i + 1]);
                    break;
                }

                int k = i - 1;
                if(k - 2 >= 0){
                    if(v[k - 2] != v[k]){
                        swap(v[k], v[k - 1]);
                        break;
                    }
                }
                else if(k - 1 >= 0){
                    swap(v[k], v[k - 1]);
                    break;
                }
            }
        }
    }

    int cnt = 1;
    for(int i = 1; i < sz(v); i++){
        // cout << v[i];
        if(v[i] != v[i - 1]) cnt++;
    }
    
    cout << cnt << endl;
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