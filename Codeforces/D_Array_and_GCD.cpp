#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6;
bool prime[N];
vector<int> p;
void sieve(){
    fill(prime, prime + N, true);
    for(int i = 2; i <= N; i++){
        if(prime[i]){
            p.push_back(i);
            for(int j = i; j < N; j += i){
                prime[j] = false;
            }
        }
    }
    
}

int32_t main()
{   
    opt();
    sieve();
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int j = 1, coin = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 2) continue;
            if(v[i] >= p[j] and v[i - 1] < p[j]){
                coin += v[i] - p[j];
                v[i] = p[j];
                j++;
            }
        }

        for(int i = 1; i < n; i++){
            if(v[i] == v[i - 1]){
                int nd = p[j] - v[i];
                if(coin >= nd){
                    v[i] = p[j];
                    coin -= nd;
                    j++;
                }
            }
        }

        // cout << p[j] << " " << coin << " : ";

        sort(v.begin(), v.end());

        int cnt = 0;
        for(int i = 1; i < n; i++){
            if(v[i] == v[i - 1]) cnt++;
            if(!prime[v[i]]) cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}