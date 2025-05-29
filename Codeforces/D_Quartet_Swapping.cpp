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
        priority_queue<int, vector<int>, greater<int>> even, odd;

        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(i % 2) odd.push(x);
            else even.push(x);
        }

        while(even.size() and odd.size()){
            cout << odd.top() << " "; odd.pop();
            cout << even.top() << " "; even.pop();
        }
        if(odd.size()) cout << odd.top() << " ";
        if(even.size()) cout << even.top() << " ";
        
        cout << endl;
    }
    
    return 0;
}