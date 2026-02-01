#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        vector<int> third;
        int one = 0, two = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x == -1) one++;
            if(x == -2) two++;
            if(x > 0) third.push_back(x);
        }
        sort(third.begin(), third.end());
        third.erase(unique(third.begin(), third.end()), third.end());
        int thre = sz(third);

        int ans = max(min(one + thre, m), min(two + thre, m));

        if(!thre){
            cout << ans << endl; continue;
        }
        for(int i = 0; i < thre; i++){
            int l = min(third[i] - 1, one + i);
            int r = min(m - third[i], two + thre - i - 1);
            ans = max(ans, l + r + 1);
        }
        cout << ans << endl;
    }
    
    return 0;
}