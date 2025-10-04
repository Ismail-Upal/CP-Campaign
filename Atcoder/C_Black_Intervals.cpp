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
    
    int n, q; cin >> n >> q;
    vector<int> box(n + 2, 0);

    int cnt = 0;
    while(q--){
        int i; cin >> i;
        if(box[i] == 0){
            box[i] = 1;
            if(box[i - 1] == 0 and box[i + 1] == 0) cnt++;
            if(box[i - 1] == 1 and box[i + 1] == 1) cnt--;
        }
        else{
            box[i] = 0;
            if(box[i - 1] == 1 and box[i + 1] == 1) cnt++;
            if(box[i - 1] == 0 and box[i + 1] == 0) cnt--;
        }
        // for(int i = 1; i <= n; i++) cout << box[i] << " ";
        cout << cnt << endl;
    }
    
    return 0;
}