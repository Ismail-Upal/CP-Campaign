#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();


    tc{
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
            while(pq.top() < pq.size()){
                pq.pop();
            }
            cout << pq.size() << " ";
        }
        cout << endl;
    }
    
    return 0;
}